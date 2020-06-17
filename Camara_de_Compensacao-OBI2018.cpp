#include <iostream>
#include <algorithm>
using namespace std;

int func(int a,int b){
	return a > b;
}

int main(){
	
	int m, n,x,v,y,soma_v=0;
	int w[1010] = {};
	cin >> m >> n;
	
	
	for(int i=0;i<m;i++){
		cin >> x >> v >> y;
		w[y]+= v;
		w[x] -= v;
		soma_v += v;
	}
	
	sort(w+1,w+n+1, func);
	
	int i = 1;
	int soma = 0;
	while(true){
		if(w[i] > 0){
			soma += w[i];
		}else{
			break;
		}
		i++;
	}
	
	if(soma == soma_v){
		cout << "N" << endl; 
	}else{
		cout << "S" << endl;
	}
	cout << soma << endl;
}
