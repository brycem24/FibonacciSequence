//Include the library to write to the console output
#include <iostream>

//Allows you to write to output without putting std:: before command.
using namespace std;

int fibonacci(int n)
{
	//Finished, don't recurse anymore.
	if (n < 2)
		return 1;
	//Recursively work backwards in the fibonacci set.
	else
		return fibonacci (n - 1) + fibonacci (n - 2);
}

int main(void)
{
	//Take in how many terms to be displayed
	cout << "How many terms of the Fibonacci Sequence?" << endl;
	int terms;
	cin >> terms;

	//Calculate the fibonacci sequence for each term
	for (int i = 0; i < terms; i++)
		cout << fibonacci(i) << " ";

	//Return without error
	return 0;
}


