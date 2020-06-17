#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int l,c;
	double qnt_1,qnt_2;
	double area;
	double piso = 0.5;
	
	cin >> l >> c;
	
	area = l*c - 0.5;
	
	qnt_2 = 2*(l-1) + 2*(c-1);
	
	qnt_1 = (area-(qnt_2*piso/2.0))/piso;
	
	cout << fixed;
	cout.precision(0);
	cout << qnt_1 << endl;
	cout << qnt_2 << endl;
	
}
