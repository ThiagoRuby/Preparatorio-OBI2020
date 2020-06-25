#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

#define MAXN 1010

int m,n;
pair<int,int> dois, tres;
int comp[MAXN][MAXN];
int mat[MAXN][MAXN];
int pos[][2] = {-1,0,1,0,0,-1,0,1};


int dfs(int a, int b){
	for(int i=0;i<4;i++){
		int v = mat[a+pos[i][0]][b+pos[i][1]];
		if(a+pos[i][0]==-1 || a+pos[i][0]==n || b+pos[i][1]==-1 || b+pos[i][1]==m) continue;
		if(comp[a+pos[i][0]][b+pos[i][1]] || v == 0) continue;
		comp[a+pos[i][0]][b+pos[i][1]] = comp[a][b] + 1;
		dfs(a+pos[i][0], b+pos[i][1]);
	}
	return comp[tres.first][tres.second];
}


int main(){
	cin >> n >> m;
	for(int i =0;i<n;i++){
		for(int j =0;j<m;j++){
			cin >> mat[i][j];
			if (mat[i][j] == 2) dois = make_pair(i,j);
			if (mat[i][j] == 3) tres = make_pair(i,j);
		}
	}
	
	comp[dois.first][dois.second] = 1;
	cout << dfs(dois.first, dois.second) << endl;
}
