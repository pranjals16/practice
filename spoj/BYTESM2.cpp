#include<iostream>
using namespace std;
#define MAXN 101
int grid[MAXN][MAXN];
int main(){
	int t;
	cin >> t;
	while(t--){
		int m,n,i,j;
		cin >> m >> n;
		for(i=1;i<=m;i++)
			grid[i][n+1]=0;
		for(i=1;i<=m;i++)
			for(j=1;j<=n;j++)
				cin >> grid[i][j];
		for(i=m-1;i>0;i--)
			for(j=1;j<=n;j++)
				grid[i][j]+=max(grid[i+1][j-1],max(grid[i+1][j],grid[i+1][j+1]));
		int res=0;
		for(int i=1;i<=n;i++)
			res=max(res,grid[1][i]);
		cout << res << endl;
	}
	return 0;
}
