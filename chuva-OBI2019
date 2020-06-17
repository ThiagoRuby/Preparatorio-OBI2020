#include <iostream>
using namespace std;


int main(){
	int n, m;
	cin >> n >> m;
	
	string c[n];
	
	for(int i=0;i<n;i++){
		cin >> c[i];
	}
	
	for(int i=0;i<n;i++){
		if(i > 0){
			for(int j=0;j<m;j++){
				if(c[i][j]=='.' && c[i-1][j]=='o') c[i][j] = 'o';
			}
		}
		if(i < (n-1)){
			for(int j=1;j<m;j++){
				if(c[i][j]=='.' && c[i][j-1]=='o' && c[i+1][j-1]=='#') c[i][j] = 'o';
			}
			
			for(int j=(m-1);j>=0;j--){
				if(c[i][j]=='.' && c[i][j+1]=='o' && c[i+1][j+1]=='#') c[i][j] = 'o';
			}
		}
	}
	
	for(int i=0;i<n;i++){
		cout << c[i] << endl;
	}
	
}
