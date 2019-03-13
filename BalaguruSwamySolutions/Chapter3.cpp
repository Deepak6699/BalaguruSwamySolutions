#include "pch.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <stdlib.h>
#include <time.h>

using namespace std;






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
