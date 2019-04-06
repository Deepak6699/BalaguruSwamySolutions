#pragma once
#ifndef CHAPTER_H
#define CHAPTER_H
class BankAccount {
	const char* depositor;
	long accNumber;
	const char* type;
	double depositAmount;
	double balAmount;
public:
	BankAccount(const char*, long,const char*,double, double);
	void DepositAmount(double);
	double withDraw();
	void display();
	friend void displayfriendsDetails(BankAccount &bankAccount);
};
#endif // !CHAPTER_H
