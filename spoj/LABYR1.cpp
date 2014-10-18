#include<stdio.h>
#include<iostream>
#include<map>
#include<queue>
#include<vector>
using namespace std;
#define MAX 1111
char grid[MAX][MAX];
int row,col,best;
pair<int,int> next;

void dfs(int i,int j, int d){
	if(i<0 || i>=row || j<0 || j>=col || grid[i][j]!='.') return;
	grid[i][j]='v';
	dfs(i+1,j,d+1);
	dfs(i-1,j,d+1);
	dfs(i,j+1,d+1);
	dfs(i,j-1,d+1);
	grid[i][j]='.';
	if(d>best){
		best=d;
		next.first=i;
		next.second=j;
	}
}

int find(){
	int maxlen=0;
	if(grid[next.first][next.second]!='.') return 0;
	while(1){
		best=0;
		dfs(next.first,next.second,0);
		if(best<=maxlen) break;
		else maxlen=best;
	}
	return maxlen;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		cin >> row >> col;
		for(int i=0;i<row;i++)
			cin >> grid[i];
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				if(grid[i][j]=='.'){
					next.first=i;
					next.second=j;
				}
			}
		}
		cout << "Maximum rope length is " << find() << "." << endl;
		//cout << st_x << " "<<st_y<<" "<<ed_x<<" "<<ed_y<<endl;
	}
	return 0;
}
