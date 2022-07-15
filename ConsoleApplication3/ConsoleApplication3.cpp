#include <iostream>
#include <math.h>

using namespace std;

void sum()
{
	int n = 0;
	int sum = 0;

	cout << "Enter the number: ";
	cin >> n;

	while (n > 0) {
		sum += n % 10;
		n = n / 10;
	}

	cout << "The sum of digits is " << sum << endl;
}

void multiply()
{
	int n = 0;
	int mult = 0;

	cout << "Enter the number: ";
	cin >> n;

	while (n > 0) {
		mult *= n % 10;
		n = n / 10;
	}

	cout << "The product of digits is " << sum << endl;
}

void ascendingOrDescending()
{
	int n = 0;
	int num = 0;
	int buffer = 0;

	cout << "Enter the number: ";
	cin >> n;

	num = n;

	buffer = n % 10;
	n = n / 10;

	while (n > 0) {
		if (n % 10 >= buffer)
			break; 
		buffer = n % 10;
		n = n / 10;
	}

	buffer = num % 10;
	num = num / 10;

	while (num > 0) {
		if (num % 10 <= buffer)
			break;
		buffer = num % 10;
		num = num / 10;
	}


	if (n == 0)
		cout << "The number is ascending sequence of digits" << endl;
	else
		if (num == 0)
			cout << "The number is descending sequence of digits" << endl;
		else
			cout << "The number isn't ascending or descending sequence of digits" << endl;

}

void minMaxAndAvg()
{
	int n = 0;
	int number = 0;
	int max = 0;
	int min = 0;
	double average = 0;
	int averageValue = 0;
	double diff = 0;
	int i = 0;
	double difference = 0;

	cout << "Enter the number: ";
	cin >> n;

	number = n;
	while (number > 0) {
		average += number % 10;
		number = number / 10;
		i++;
	}
	average = average / i;

	averageValue = n % 10;
	difference = abs(average - n % 10);

	max = min = n % 10;
	while (n > 0) {

		if (max < n % 10)
			max = n % 10;

		if (min > n % 10)
			min = n % 10;

		if (abs(average - n % 10) < difference) {
			difference = abs(average - n % 10);
			averageValue = n % 10;
		}

		n = n / 10;
	}

	cout << "Max is " << max << endl;
	cout << "Min is " << min << endl;
	cout << "Average is " << averageValue << endl;
}

void twoDigits()
{
	int n = 0;
	int buffer = 0;
	int flag = 0;

	cout << "Enter the number: ";
	cin >> n;

	buffer = n % 10;
	n = n / 10;

	while (n > 0) {
		if (buffer == n % 10) {
			flag++;
			break;
		}
		buffer = n % 10;
		n = n / 10;
	}

	if (flag == 0)
		cout << "The number does not contain two identical digits standing side by side" << endl;
	else
		cout << "The number really contains two identical digits standing side by side" << endl;
}

void allIdenticalDigits()
{
	int n = 0;
	int number = 0;
	int buffer = 0;
	int flag = 0;

	cout << "Enter the number: ";
	cin >> n;

	while (n > 0) {

		buffer = n % 10;
		n = n / 10;
		number = n;

		while (number > 0) {
			if (number % 10 == buffer) {
				flag++;
			}
			number = number / 10;
		}
	}

	if (flag == 0)
		cout << "The number does not contain identical digits standing side by side" << endl;
	else
		cout << "The number really contains identical digits standing side by side" << endl;
}

int main()
{
	minMaxAndAvg();
	sum();
	multiply();
	ascendingOrDescending();
	twoDigits();
	allIdenticalDigits();
	return 0;
}

