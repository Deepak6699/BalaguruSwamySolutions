#include "pch.h"
#include <iostream>
#include <iomanip>

using namespace std;


//Exercise2.6
//class Convert2Celsius {
//	float tempCel;
//public:
//	float conversionFunction(float);
//};
//float Convert2Celsius::conversionFunction(float far) {
//	tempCel = (far - 32.0) / 1.8;
//	return tempCel;
//}
//int main() {
//	Convert2Celsius c;
//	cout<<"Enter the temprature in Fareinheit and display the value in Celsius"<<endl;
//	float tempFar;
//	cin >> tempFar;
//	cout<<c.conversionFunction(tempFar)<<endl;
//	return 0;
//}

//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//Exercise2.5
//int main() {
//	float tempFar, tempCel;
//	cout << "Enter the temprature in Fareinheit and display the value in Celsius" << endl;
//	cin >> tempFar;
//	tempCel = (tempFar - 32.0) / 1.8;
//	cout << tempCel<<endl;
//	return 0;
//}

//Exercise2.4
//******************************************************************
//int main() {
//	signed int a, b, c;
//	cout << "Enter the value of a b and c" << endl;
//	cin >> a >> b >> c;
//	int x = a / (b - c);
//	cout << x << endl;
//	return 0;
//}
//Exercise2.3
//***************************************************************************
//int main() {
//	int count;
//	cout << "enter number of times you need the word to be printed" << endl;
//	cin >> count;
//	for (int i = 1; i <= count; i++) {
//		cout << i <<" well done" << endl;
//	}
//	return 0;
//}


//*******************************************************************************
//Exercise2.2
//int getTheValue1,getTheValue2;
//int main() {
//	cout << "Enter two values" << endl;
//	cin >> getTheValue1 >> getTheValue2;
//	if (getTheValue1 > getTheValue2) {
//		cout << getTheValue1<<endl;
//	}
//	else {
//		cout << getTheValue2 << endl;
//	}
//
//	return 0;
//}
//************************************************************************************************
//Exercise 2.1
//int Maths = 10,Physics = 20,Chemistry = 30;
//int main() {
//	cout << setw(12)<<"maths = " << setw(5)<<Maths << endl
//		<< setw(12)<<"physics = " <<setw(5) << Physics << endl
//		<< setw(12)<<"chemistry = " << setw(5)<<Chemistry << endl;
//}