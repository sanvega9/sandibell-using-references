#include <iostream>
#include <string>

using namespace std;

void NormalBalenceCheck(int x, int y);
void HackingBalenceCheck(int& x, int& y);


int main()
{
	//create assign values
	//display end total 
	int collegefunds = 6700000;
	int hackerfunds = 332000;
	int sum = collegefunds - hackerfunds;
	cout << "Account Balance: " << sum << endl;

	//display the checking balances
	cout << "\n\n***checking balances\n\n";
	//display and a call the value of the integer
	cout << "The bank balance is: " << collegefunds << endl;
	cout << "The hackers balance is : " << hackerfunds << endl;

	cout << "Transaction()\n";

	// Function transaction with the integers
	NormalBalenceCheck(collegefunds, hackerfunds);

	cout << "The bank balance is ****" << collegefunds << endl;
	cout << "The hacker balance is ****" << hackerfunds << endl;

	cout << "hackingTransaction\n";

	// function hackingTransaction with the integers
	HackingBalenceCheck(collegefunds, hackerfunds);
	cout << "The bank balance is ****" << collegefunds << endl;
	cout << "The hacker balance is ****" << hackerfunds << endl;

	cout << "\n\n\t\t***Goodbye***\n\n";
	return 0;
}

void NormalBalenceCheck(int x, int y)
{
	// reference for the NormalBalenceCheck
	int temp = x;
	x = y;
	y = temp;

}
void HackingBalenceCheck(int& x, int& y)
{
	//reference for the hackingBalenceCheck
	int temp = x;
	x = y;
	y = temp;
}
