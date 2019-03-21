#include "pch.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <stdlib.h>
#include <time.h>

using namespace std;
//1st 100 = 60p
//next 200 = 80p]
//beyond 300 = 90p
//minimum of 50rps
//if>300 15% surchanrge
class Bill {
	vector<string> user = {"Sam","Nikhil","Chiru","Vishnu","Deepak","Venu"};
	vector<long int> noOfUnits = {23200,1900,1234500,100,10000,200};
	double amount;
	int rowHouseNumber;
public:
	Bill(int rowHouse) {
		rowHouseNumber = rowHouse;
	}
	double caluclateBill(string,long int);
	void displayBill();
	string getUser() {
		//int i = rowHouseNumber - 1;
		//for (i = 0; i < user.size(); i++)
			return user.at(rowHouseNumber-1);
	}
	long int getUnits() {
		return noOfUnits.at(rowHouseNumber -1);
	}
};
double Bill::caluclateBill(string userName,long int units) {
	double billAmount = 50;
	if(units>=0 && units<=100){
		billAmount += (units * 60) * 0.01;
	}
	if (units > 100 && units <= 300) {
		billAmount += (units * 80)*0.01;
	}
	if (units > 300) {
		billAmount += (units * 90)*0.01;
		billAmount += billAmount * 0.15;
	}
	return billAmount;
}
int main() {

	Bill bill(2);
	cout << bill.caluclateBill(bill.getUser(), bill.getUnits()) << endl;
	return 0;
}





//*************************************************************************************
//Exercise 3.6
//class Player {
//	const char* teamMember;
//	int runs;
//	int innings;
//	int timesNotOut;
//	double averageOfPlayer;
//public:
//	Player(const char* name,int r, int i, int t) {
//		teamMember = name;
//		runs = r;
//		innings = i;
//		timesNotOut = t;
//	}
//	int getRuns();
//	int getInnings();
//	int getTimesNotOut();
//	double caluclateAverage();
//	void displayDetails();
//	const char* getPlayerName() {
//		return teamMember;
//	}
//	};
//void Player::displayDetails() {
//	cout << this->getPlayerName() << "\t" << this->getRuns() << "\t" << this->getInnings() << "\t" << this->getTimesNotOut() << "\t" << this->caluclateAverage() << endl;
//	/*this->getPlayerName();
//	this->getRuns();
//	this->getInnings();
//	this->getTimesNotOut();
//	this->caluclateAverage();*/
//}
//double Player::caluclateAverage() {
//	averageOfPlayer = runs / innings;
//	return averageOfPlayer;
//}
//int Player::getRuns() {
//	return runs;
//}
//int Player::getInnings() {
//	return innings;
//}
//int Player::getTimesNotOut() {
//	return timesNotOut;
//}
//int main() {
//	Player Sachin("Sachin",8340,230,18), Savrav("Savrav",4200,130,9), Rahul("Rahul",3350,105,11);
//	/*Sachin.setRuns(8340);
//	Sachin.setInnings(230);
//	Sachin.setTimesNotOut(18);
//	Savrav.setRuns(4200);
//	Savrav.setInnings(130);
//	Savrav.setTimesNotOut(9);
//	Rahul.setRuns(3350);
//	Rahul.setInnings(105);
//	Rahul.setTimesNotOut(11);*/
//	cout << "Players Name \t Runs \t Innings \t Times Not Out \t Average" << endl;
//	Sachin.displayDetails();
//	Savrav.displayDetails();
//	Rahul.displayDetails();
//	/*cout<<Sachin.getPlayerName()<<"\t"<<Sachin.getRuns()<<"\t"<<Sachin.getInnings()<<"\t"<<Sachin.getTimesNotOut()<<"\t"<<Sachin.caluclateAverage()<<endl;
//	cout << Savrav.getPlayerName() << "\t" << Savrav.getRuns() << "\t" << Savrav.getInnings() << "\t" << Sachin.getTimesNotOut() << "\t" << Savrav.caluclateAverage() << endl;
//	cout << Rahul.getPlayerName() << "\t" << Rahul.getRuns() << "\t" << Rahul.getInnings() << "\t" << Rahul.getTimesNotOut() << "\t" << Sachin.caluclateAverage() << endl;
//	cout<<"Sachin Average "<<Sachin.caluclateAverage()<<endl;
//	cout << "Savrav Average " << Savrav.caluclateAverage() << endl;
//	cout << "Rahul Average " << Rahul.caluclateAverage() << endl;*/
//	return 0;
//}


//****************************************************************************************************
//Exercise3.5
//class Elections {
//	int count[5];
//	vector<int> random;
//public:
//	int getCount(int);
//	void generateRandomNumber();
//	void countTheVotes(vector<int> &);
//	vector<int> getRandomNumberVector();
//};
//vector<int> Elections::getRandomNumberVector() {
//	return random;
//}
//int Elections::getCount(int i)
//{
//	return count[i];
//}
//
//void Elections::generateRandomNumber() {
//	int firstNumber = 1;
//	int noOfNumbers = 6;
//	srand(time(0));
//	for (int i = 0; i < 20; i++) {
//		random.push_back(rand() % noOfNumbers + firstNumber);
//		cout << random.at(i)<<"\t";
//	}
//		cout << endl;
//}
//void Elections::countTheVotes(vector<int> &votes) {
//	for (int vote = 0; vote < votes.size(); vote++) {
//		int traverse = votes.at(vote);
//		switch (traverse) {
//		case 1:
//			count[0]++;
//			break;
//		case 2:
//			count[1]++;
//			break;
//		case 3:
//			count[2]++;
//			break;
//		case 4:
//			count[3]++;
//			break;
//		case 5:
//			count[4]++;
//			break;
//		case 6:
//			count[5]++;
//			break;
//		default:
//			cout << "Not valid" << endl;
//		}
//	}
//}
//int main() {
//	Elections ele;
//	ele.generateRandomNumber();
//	vector<int> getVector = ele.getRandomNumberVector();
//	ele.countTheVotes(getVector);
//	cout<<"the cout is "<<ele.getCount(2)<<endl;
//	return 0;
//}



//**************************************************************************************
//V=P(1+r)pow(n)
//class Formulae {
//public:
//	vector<int> principle, numYears;
//	vector<float> rate;
//	vector<float> vect;
//	void caluclateValueOfMoney(int,int,float);
//};
//void Formulae::caluclateValueOfMoney(int principle, int numYears, float rate)
//{
//	float value = principle * (pow((1 + rate), numYears));
//	vect.push_back(value);
//}
//int main() {
//	Formulae f1;
//	for (int i = 1000; i <= 10000; i = i + 1000) {
//		f1.principle.push_back(i);
//	}
//	for (int j = 1; j <= 10; j++) {
//		f1.numYears.push_back(j);
//	}
//	for (float k = 0.10; k <= 0.20; k = k + 0.01) {
//		f1.rate.push_back(k);
//	}
//	for (int l = 0; l < f1.principle.size();l++) {
//		f1.caluclateValueOfMoney(f1.principle.at(l),f1.numYears.at(l),f1.rate.at(l));
//	}
//	for (auto final = f1.vect.begin(); final != f1.vect.end(); ++final) {
//		cout << *final << endl;
//	}
//	return 0;
//}


//Exercise3.3
//int main() {
//	cout << "Enter the limit to which the loop should be incremented" << endl;
//	int size;
//	cin >> size;
//	for (int i = 0; i <=size; i++) {
//		for (int j = 0; j < i; j++) {
//			cout << i;
//		}
//			cout << endl;
//	}
//	return 0;
//}

//***********************************************************************************
////Exercise3.2
//int setSize() {
//	cout << "Enter the size for the vector" << endl;
//	int size;
//	cin >> size;
//	return size;
//}
//int main() {
//	vector<int> *vect;
//	//vect.push_back(10);
//	//vect.push_back(20);
//	int getSize = setSize();
//	vect = new vector<int>(getSize);
//	cout << vect->size() << endl;
//	//cout << vect->size() << endl;
//	//cout << vect<< endl;
//	return 0;
//	}


//**************************************************************************************
//Exercise3.1
//class swapNumbers {
//public:
//	int a = 50, b = 60;
//	void swapIt(int&, int&);
//};
//void swapNumbers::swapIt(int &x, int &y)
//{
//	int temp = x;
//	x = y;
//	y = temp;
//}
//int main() {
//	swapNumbers s;
//	s.swapIt(s.a, s.b);
//	cout << s.a << " "<<s.b << endl;
// return 0;
//}
