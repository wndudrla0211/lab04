// lab04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from void printMenu() {

void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}

void factorial() {
	int n;
	cout << "Factorial:" << endl;
	cout << "Enter a number: ";
	cin >> n;

	while (n <= 0) {
		cout << "Nice try, please enter a POSITIVE number...: ";
		cin >> n;
	}
	int result = 1;
	cout << n << "! = ";
	for (int i = 1; i <= n; i++) {
		result *= i;
		cout << i;
		if (i < n) cout << " * ";
	}
	cout << " = " << result << endl;
}

void arithmetic() {
	int start, diff, count;
	cout << "Arithmetic Series:" << endl;
	cout << "Enter a number to start at: ";
	cin >> start;
	cout << "Enter a number to add each time: ";
	cin >> diff;
	cout << "Enter the number of elements in the series: ";
	cin >> count;

	while (count <= 0) {
		cout << "Please enter a positive number for count: ";
		cin >> count;
	}

	int sum = 0;
	int current = start;

	for (int i = 0; i < count; i++) {
		cout << current;
		sum += current;
		if (i < count - 1) cout << " + ";
		current += diff;
	}
	cout << " = " << sum << endl;
}

void geometric() {
	int a, r, count;
	cout << "Geometric Series:" << endl;
	cout << "Enter a number to start at: ";
	cin >> a;
	cout << "Enter a number to multiply by each time: ";
	cin >> r;
	cout << "Enter the number of elements in the series: ";
	cin >> count;

	while (count <= 0) {
		cout << "Please enter a positive number for count: ";
		cin >> count;
	}
	int sum = 0;
	int current = a;

	for (int i = 0; i < count; i++) {
		cout << current;
		sum += current;
		if (i < count - 1) cout << " + ";
		current *= r;
	}
	cout << " = " << sum << endl;
}

int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');

	return 0;
}