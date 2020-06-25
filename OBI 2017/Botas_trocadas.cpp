#include <iostream>
#include <vector>

using namespace std;

char l;
int n, m, qnt;
int D[10010];
int E[10010];

int main(){
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> m >> l;
		if(l == 'D') D[m] += 1;
		if(l == 'E') E[m] += 1;
	}
	
	for (int i=30;i<61;i++){
		if(D[i] > 0 && E[i] > 0){
			int a = min(D[i],E[i]);
			qnt += a;
		}
	}
	
	cout << qnt << endl;
}
