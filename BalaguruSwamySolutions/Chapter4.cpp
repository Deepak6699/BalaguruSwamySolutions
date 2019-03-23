#include "pch.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <stdlib.h>
#include <time.h>

using namespace std;

vector<int> newVector;
void readTheMatrix(int m,int n) {
	int giveTheLead;
	cout << "Enter the numbers you wanted to push into the matrix" << endl;
	for (int i = 0; i < m; i++) {
		cout << "Now you are in row " << i << endl;
		for (int j = 0; j < n; j++) {
			cout << "Enter the numbers you wanted in row " << i << "column " << j << endl;
			cin >> giveTheLead;
			newVector.push_back(giveTheLead);
		}
	}
}

int main() {
	int m, n;
	cout << "Enter the size of matrix " << endl;
	cin >> m >> n;
	readTheMatrix(m, n);
	for (auto i = newVector.begin(); i != newVector.end(); ++i) {
		cout << *i << " ";
	}
	//cout << "the mattter is conveyed" << endl;
	return 0;
}

