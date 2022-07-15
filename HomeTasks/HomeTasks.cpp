#include <iostream>
#include <iomanip>
using namespace std;

void printMultiplicationTable()
{
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << setw(4) << i * j;
        }
        cout << endl;
    }
}

void Bishops()
{
    int x1 = 0;
    int x2 = 0;
    int y1 = 0;
    int y2 = 0;

    cout << "Enter x1: ";
    cin >> x1;
    cout << "Enter y1: ";
    cin >> y1;
    cout << "Enter x2: ";
    cin >> x2;
    cout << "Enter x2: ";
    cin >> y2;

    if (x1 > 8 or y1 > 8 or x2 > 8 or y2 > 8 or x1 < 0 or y1 < 0 or x2 < 0 or y2 < 0)
    {
        cout << "Incorrect coordinates" << endl;
    }
    else
    {
        if (x1 == x2 and y1 == y2)
        {
            cout << "Bishops can't stand at the same place" << endl;
        }
        else
        {
            if (abs(x1 - x2) == abs(y1 - y2))
            {
                cout << "Bishops can beat each other" << endl;
            }
            else
            {
                cout << "Bishops can't beat each other" << endl;
            }
        }
    }
}

void mutants()
{
    int m = 0;
    int p = 0;
    int n = 0;
    int days = 0;

    cout << "Enter the number of mutants that attacked Minsk: ";
    cin >> m;
    cout << "Enter percentage of mutant reproduction: ";
    cin >> p;
    cout << "Enter the number of mutants that are killed daily by utilities: ";
    cin >> n;

    if (m < 0 || p < 0 || n < 0) {
        cout << "Incorrect data. Values must be positive." << endl;
        return;
    }

    if (m * p / 100 > n) {
        cout << "Mutants will never be destroyed(((";
    }
    while (m > 0) {
        m += m * p / 100;
        m -= n;
        days++;
    }
    cout << "Mutants be destroyed in " << days << " days)))";
}

void horses()
{
    int x1 = 0;
    int x2 = 0;
    int y1 = 0;
    int y2 = 0;

    cout << "Enter x1: ";
    cin >> x1;
    cout << "Enter y1: ";
    cin >> y1;
    cout << "Enter x2: ";
    cin >> x2;
    cout << "Enter x2: ";
    cin >> y2;

    if (x1 > 8 or y1 > 8 or x2 > 8 or y2 > 8 or x1 < 0 or y1 < 0 or x2 < 0 or y2 < 0)
    {
        cout << "Incorrect coordinates" << endl;
    }
    else
    {
        if (x1 == x2 and y1 == y2)
        {
            cout << "Horses can't stand at the same place" << endl;
        }
        else
        {
            if ((x1 + 2 == x2 and y1 + 1 == y2) or
                (x1 + 2 == x2 and y1 - 1 == y2) or
                (x1 - 2 == x2 and y1 + 1 == y2) or
                (x1 - 2 == x2 and y1 - 1 == y2) or
                (x1 - 1 == x2 and y1 + 2 == y2) or
                (x1 + 1 == x2 and y1 + 2 == y2) or
                (x1 - 1 == x2 and y1 - 2 == y2) or
                (x1 + 1 == x2 and y1 - 2 == y2)) 
            {
                cout << "Horses can beat each other" << endl;
            }
            else 
            {
                cout << "Horses can't beat each other" << endl;
            }
        }
    }
}

void numberOfFate()
{
    int day = 0;
    int month = 0;
    int year = 0;
    int result = 0;
    int buffer = 0;

    cout << "Enter yout birth date" << endl;
    cout << "Day: ";
    cin >> day;
    cout << "Month: ";
    cin >> month;
    cout << "Year: ";
    cin >> year;

    if (day < 1 || day > 31 || month < 1 || month > 12 || year < 1900 || year > 2022) 
    {
        cout << "Incorrect data" << endl;
        return;
    }

    while (year > 0) {
        result += year % 10;
        year /= 10;
    }

    while (day > 0) {
        result += day % 10;
        day /= 10;
    }

    while (month > 0) {
        result += month % 10;
        month /= 10;
    }


    while (result > 10) {
        buffer = result;
        result = 0;
        while (buffer > 0) {
            result += buffer % 10;
            buffer /= 10;
        }
        
    }

    cout << "Result number is " << result;
}

int main()
{
	printMultiplicationTable();
    Bishops();
    mutants();
    horses();
    numberOfFate();
	return 0;
}