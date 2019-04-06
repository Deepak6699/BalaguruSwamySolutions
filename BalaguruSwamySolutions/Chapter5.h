#pragma once
#ifndef CHAPTER5_H
#define CHAPTER5_H
class BankAccount {
	char* depositor;
	long accNumber;
	char* type;
	double depositAmount;
	double balAmount;
public:
	BankAccount(char*, long, char*, double);
	void DepositAmount(double);
	double withDraw(double);
	void display();
	friend void displayfriendsDetails(BankAccount &bankAccount);
};
#endif // !CHAPTER_H
