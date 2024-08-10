#include <iostream>
using namespace std;

// Function prototypes
void normalBalanceCheck(int accountBalance, const string& accountName);
void hackedBalanceCheck(int& terroristAccountBalance, int& coffeeShopAccountBalance);
void printBalances(const string& accountName, int accountBalance);

int main() {
	// Initial account balances
	int terroristAccountBalance = 1000000; // Terrorist group's account balance
	int coffeeShopAccountBalance = 500; // Joe's Coffee Shop account balance

	// Print original balances
	cout << "Original Account Balances: " << endl;
	printBalances("Terrorist Account", terroristAccountBalance);
	printBalances("Joe's Coffee Shop", coffeeShopAccountBalance);

	// Perform normal balance check on the terrorist account
	cout << "\n[Normal Transaction] Checking Terrorist Account Balance..." << endl;
	normalBalanceCheck(terroristAccountBalance, "Terrorist Account");

	// Perform hacked balance check (swap the balances)
	cout << "\n[Hacked Transaction] Swapping Terrorist Account with Joe's Coffee Shop Account..." << endl;
	hackedBalanceCheck(terroristAccountBalance, coffeeShopAccountBalance);

	// Print new balances after the hack
	cout << "\nNew Account Balances After Hacking:" << endl;
	printBalances("Terrorist Account", terroristAccountBalance);
	printBalances("Joe's Coffee Shop", coffeeShopAccountBalance);

	return 0;
}

// Function to print the balance of an account
void printBalances(const string& accountName, int accountBalance) {
	cout << accountName << " Balance: $" << accountBalance << endl;
}

//Function for normal balance check (does not modify the balance)
void normalBalanceCheck(int accountBalance, const string& accountName) {
	cout << accountName << " Balance: $" << accountBalance << " (No changes made)" << endl;
}

// Function for hacked balance check (swaps the balances by reference)
void hackedBalanceCheck(int& terroristAccountBalance, int& coffeeShopAccountBalance) {
	// Swap the balances
	int temp = terroristAccountBalance;
	terroristAccountBalance = coffeeShopAccountBalance;
	coffeeShopAccountBalance = temp;

	cout << "Balances have been swapped successfully!" << endl;
}