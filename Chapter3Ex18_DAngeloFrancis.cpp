

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double principal;
	double interestRate;
	double timesCompounded;

	// user inputs principal (original balance)
	cout << "Calculating the balance in a savings account after one year." << endl << endl;
	cout << "Enter the principal, or original balance, of this savings account: ";
	cin >> principal;
	cout << endl;

	// user inputs interest rate
	cout << "Enter the interest rate of this savings account: ";
	cin >> interestRate;
	cout << endl;

	// user inputs number of times the interest is compounded
	cout << "Enter the number of times interest is compounded: ";
	cin >> timesCompounded;
	cout << endl;

	// calculating balance in savings account after a year
	int currentSavings = principal * pow(1 + interestRate / timesCompounded, timesCompounded);

	// results
	cout << "-------------------------------------------------" << endl << endl;
	cout << "Here is the balance in a savings account after one year: " << endl << endl;
	cout << "- Interest Rate: " << interestRate << "% " << endl;
	cout << "- Times Compounded: " << timesCompounded << endl;
	cout << "- Principal: $" << principal << endl;
	cout << "- Interest: " << endl;
	cout << "- Amount in Savings: $" << currentSavings;

	return 0;
}