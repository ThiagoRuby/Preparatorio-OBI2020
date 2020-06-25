#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

#define MAXN 100010

int n, m, j,x,y,a,b,e,minId=100;
char I;
int id[510];
int comp[510];
vector<int> v[510];


void trocar(int a, int b){
	vector<int>::iterator it1, it2;
	
	for(int i=1;i<=n;i++){
		for(int j=0;j<(int) v[i].size();j++){
			if (v[i][j] == a){
				v[i][j] = b;
			}else if (v[i][j] == b){
				v[i][j] = a;
			}
				
		}
	}
	
	vector<int> aux;
	aux = v[a];
	v[a] = v[b];
	v[b] = aux;
}

int dfs(int x){
	if(v[x].empty()){
		return -1;
	}
	for(int i=0;i<v[x].size();i++){
		
		int w = v[x][i];
		
		if(comp[w] == -1){
			comp[w] = comp[x];
			if(id[w] < minId){
				minId = id[w];
			}
			dfs(w);
		}
		
	}
	return minId;
}


int main(){
	cin >> n >> m >> j;
	
	for(int i=1;i<=n;i++) comp[i] = -1;
	
	for(int i=1;i<=n;i++){
		cin >> id[i];
	}
	
	for(int i=0;i<m;i++){
		cin >> x >> y;
		v[y].push_back(x);
	}
	
	for(int i=0;i<j;i++){
		cin >> I;
		if(I == 'T'){
			cin >> a >> b;
			trocar(a,b);
			/*
			for(int i=0;i<v[a].size();i++){
				cout << v[a][i] << " "; 
			}
			cout << "" << endl;
			for(int i=0;i<v[b].size();i++){
				cout << v[b][i] << " "; 
			}
			for(int i=0;i<v[7].size();i++){
				cout << v[7][i] << " "; 
			}
			cout << "" << endl;
			*/
		}
		if(I == 'P'){
			cin >> e;
			for(int i=1;i<=n;i++) comp[i] = -1;
			comp[e] = 1;
			int aux = dfs(e);
			if(aux > 0){
				cout << aux << endl;
			}else{
				cout << "*" << endl;
			}
			minId = 100;
			
		}
	}

}
