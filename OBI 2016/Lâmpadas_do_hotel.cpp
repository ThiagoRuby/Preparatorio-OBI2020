#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

#define MAXN 1010


int main(){
	int ia,ib,fa,fb;
	cin >> ia >> ib >> fa >> fb;
	if(ia == 0 && ib == 0){
		if(fa == 0 && fb == 0) cout << 0 << endl;
		if(fa == 0 && fb == 1) cout << 2 << endl;
		if(fa == 1 && fb == 0) cout << 1 << endl;
		if(fa == 1 && fb == 1) cout << 1 << endl;
	}
	if(ia == 0 && ib == 1){
		if(fa == 0 && fb == 0) cout << 2 << endl;
		if(fa == 0 && fb == 1) cout << 0 << endl;
		if(fa == 1 && fb == 0) cout << 1 << endl;
		if(fa == 1 && fb == 1) cout << 1 << endl;
	}
	if(ia == 1 && ib == 0){
		if(fa == 0 && fb == 0) cout << 1 << endl;
		if(fa == 0 && fb == 1) cout << 1 << endl;
		if(fa == 1 && fb == 0) cout << 0 << endl;
		if(fa == 1 && fb == 1) cout << 2 << endl;
	}
	if(ia == 1 && ib == 1){
		if(fa == 0 && fb == 0) cout << 1 << endl;
		if(fa == 0 && fb == 1) cout << 1 << endl;
		if(fa == 1 && fb == 0) cout << 2 << endl;
		if(fa == 1 && fb == 1) cout << 0 << endl;
	}
}
