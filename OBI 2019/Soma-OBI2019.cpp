#include <iostream>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int x[500010];
	
	for(int i=0;i<n;i++){
		cin >> x[i];
	}
	
	long long contar = 0;
	for(int i=0;i<n;i++){
		int soma = x[i];
		for(int j=i+1;j<n+1;j++){
			if(soma == m){
				contar++;
			}
			soma += x[j];
		}
	}
	
	cout << contar << endl;
	return 0;
}
