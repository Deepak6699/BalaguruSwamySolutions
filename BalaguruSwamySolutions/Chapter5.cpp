#include "Chapter.h"
#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;
class BankAccount {
	const char* depositor;
	long accNumber;
	const char* type;
	double depositAmount;
	double balAmount;
public:
	BankAccount(const char*, long, const char*, double, double);
	void DepositAmount(double);
	double withDraw();
	void display();
	friend void displayfriendsDetails(BankAccount &bankAccount);
};
vector<long> accounts;
BankAccount::BankAccount(const char* dName, long aNumber,const char* aType,double deAmount, double bal)
{
	depositor = dName;
	accNumber = aNumber;
	accounts.push_back(accNumber);
	type = aType;
	depositAmount = deAmount;
	balAmount = bal;
}

void BankAccount::DepositAmount(double inAmount)
{
	for (auto i = accounts.begin(); i != accounts.end(); ++i) {
		if (*i == this->accNumber) {
			cout << "Account"<<this->accNumber <<"found" << endl;
			depositAmount = inAmount;
			balAmount = balAmount + depositAmount;
		}
		else {
			cout << "Searching for account" << endl;
		}
		
	}
}
double BankAccount::withDraw()
{
	double drawAmount;
	cout << "Enter the amount to be withdrawn" << endl;
	cin >> drawAmount;
	if (this->balAmount >= drawAmount) {
		cout << "The amount " << drawAmount << "is withdrawn from the account " << this->accNumber << endl;
		this->balAmount = this->balAmount - drawAmount;
	}
	return this->balAmount;
}
void BankAccount::display()
{
	cout << this->depositor << " have" << this->balAmount << " in your account number " << this->accNumber << endl;
} 

void displayfriendsDetails(BankAccount & bankAccount)
{
	cout<<bankAccount.depositor<<" and the accNumber is "<<bankAccount.accNumber<<endl;
}

int main() {
	BankAccount deepakAccount = BankAccount("Deepak Chandragiri", 123, "Savings", 500, 500);
	deepakAccount.DepositAmount(500);
	deepakAccount.display();
	deepakAccount.withDraw();
	deepakAccount.display();
	BankAccount vishnuAccount("vishnu madala", 456, "salary", 1000, 1000);
	BankAccount chiruAccount("chiranjeevi ranga", 789, "savings", 1500, 1500);
	displayfriendsDetails(deepakAccount);
	//displayfriendsDetails(vishnuAccount);
	//displayfriendsDetails(chiruAccount);
	return 0;

}