#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
int n,m;
char a[55][55];
int d[55][55];
int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};
int dy[] = {1, -1, 0, 0, 1, -1, -1, 1};
bool valid (int x, int y) {
	return x >= 0 && y >= 0 && x < n && y < m;
}
int dfs(int x, int y){
	if(d[x][y]!=-1)
		return d[x][y];
	d[x][y]=0;
	for(int k=0;k<8;k++){
		int p=x+dx[k];
		int q=y+dy[k];
		if(valid(p,q)){
			if(a[p][q]==1+a[x][y])
				d[x][y]=max(d[x][y],1+dfs(p,q));
		}
	}
	return d[x][y];
}
int main(){
	int iter=0;
	while(scanf("%d%d",&n,&m)){
		if(n==0 && m==0)
			break;
		for(int i=0;i<n;++i)
			scanf("%s",a[i]);
		for(int i=0;i<55;i++)
			for(int j=0;j<55;j++)
				d[i][j]=-1;
		int res=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]=='A' && d[i][j]==-1)
					res=max(res,dfs(i,j));	
			}
		}
		cout << "Case " << ++iter << ": " << res+1 << endl;
	}
	return 0;
}
