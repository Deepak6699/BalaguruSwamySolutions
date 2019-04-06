#include "pch.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <stdlib.h>
#include <time.h>


using namespace std;
//******************************************************************************************************
//Exercise 4.6
//inline int largest(int a, int b, int c) {
//	if (a > b) {
//		if (a > c) {
//			return a;
//		}
//		else {
//			return c;
//		}
//	}
//	else if(b>c) {
//		return b;
//	}
//	return c;
//}
//int main() {
//
//	cout<<largest(5456, 678687, 67890987)<<endl;
//	return 0;
//}
//***************************************************************************************
//Exercise 4.5
//#define windows 1
//#define mac 2
//#define linux 10
//#define os linux
//#define largest(x,y,z) (x>y?((x>z)?x:z):((y>z)?y:z))
//
//using namespace std;
//int main() {
//#if os == 10
//	cout<<largest(76576, 20, 987987)<<endl;
//	cout << "windows"<<endl;
//#else
//	cout << "something else is defined" << endl;
//#endif
//}

//**************************************************************************************************************************
//Exercise 4.3
//vector<int> newvector;
//void readthematrix(int m=3,int n=1) {
//	int givethelead;
//	cout << "enter the numbers you wanted to push into the matrix" << endl;
//	for (int i = 0; i < m; i++) {
//		cout << "now you are in row " << i << endl;
//		for (int j = 0; j < n; j++) {
//			cout << "enter the numbers you wanted in row " << i << "column " << j << endl;
//			cin >> givethelead;
//			newvector.push_back(givethelead);
//		}
//	}
//}
//
//int main() {
//	int m, n;
//	cout << "enter the size of matrix " << endl;
//	cin >> m >> n;
//	readthematrix(m, n);
//	int startofvector = 0;
//		for (int j = 0; j < m; j++) {
//			for (int k = 0; k < n; k++) {
//				cout << newvector.at(startofvector) << " ";
//				startofvector++;
//			}
//			cout << endl;
//		}
//	//cout << "the mattter is conveyed" << endl;
//	return 0;
//}
//



//************************************************************************************************************
//Exercise 4.2
//vector<int> newVector;
//void readTheMatrix(int m,int n) {
//	int giveTheLead;
//	cout << "Enter the numbers you wanted to push into the matrix" << endl;
//	for (int i = 0; i < m; i++) {
//		cout << "Now you are in row " << i << endl;
//		for (int j = 0; j < n; j++) {
//			cout << "Enter the numbers you wanted in row " << i << "column " << j << endl;
//			cin >> giveTheLead;
//			newVector.push_back(giveTheLead);
//		}
//	}
//}
//
//int main() {
//	int m, n;
//	cout << "Enter the size of matrix " << endl;
//	cin >> m >> n;
//	readTheMatrix(m, n);
//	int startOfVector = 0;
//		for (int j = 0; j < m; j++) {
//			for (int k = 0; k < n; k++) {
//				cout << newVector.at(startOfVector) << " ";
//				startOfVector++;
//			}
//			cout << endl;
//		}
//	//cout << "the mattter is conveyed" << endl;
//	return 0;
//}
//***************************************************************************************************************
//Exercise 4.1
//vector<int> newVector;
//void readTheMatrix(int m,int n) {
//	int giveTheLead;
//	cout << "Enter the numbers you wanted to push into the matrix" << endl;
//	for (int i = 0; i < m; i++) {
//		cout << "Now you are in row " << i << endl;
//		for (int j = 0; j < n; j++) {
//			cout << "Enter the numbers you wanted in row " << i << "column " << j << endl;
//			cin >> giveTheLead;
//			newVector.push_back(giveTheLead);
//		}
//	}
//}
//
//int main() {
//	int m, n;
//	cout << "Enter the size of matrix " << endl;
//	cin >> m >> n;
//	readTheMatrix(m, n);
//	for (auto i = newVector.begin(); i != newVector.end(); ++i) {
//		cout << *i << " ";
//	}
//	//cout << "the mattter is conveyed" << endl;
//	return 0;
//}

