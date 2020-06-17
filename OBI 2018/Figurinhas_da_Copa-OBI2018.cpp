#include <iostream>
#include <algorithm>
using namespace std;

int v[310];

int busca(int n,int fim){
	int ini = 0;
	while(ini<=fim){
		int meio = (ini+fim)/2;
		if (v[meio] == n) return true;
		if (v[meio] > n) fim = meio-1;
		if (v[meio] < n) ini = meio+1;
	}
	return false;
}

int main(){
	int n,c,m;
	cin >> n >>c >> m;
	int w[c];
	
	for(int i=0;i<c;i++){
		cin >> w[i];
	}
	
	for(int i=0;i<m;i++){
		cin >> v[i];
	}
	sort(v,v+m);
	int qnt=0;
	for(int i=0;i<c;i++){
		if (busca(w[i],m)==false){
			qnt++;
		}
	}
	
	cout << qnt << endl;

}
