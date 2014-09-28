#include <cmath>
#include <queue>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

#define MAX 30
char grid[MAX][MAX];
#define cell pair< int, int >
#define edge pair< int, cell >
int R,C,d[MAX][MAX];
cell dir[4] = {cell(0,1), cell(1,0), cell(0,-1), cell(-1,0)};

bool isValid(cell u) {
	int i = u.first, j = u.second;
	return (i>=0 && j>=0 && i<R && j<C);
}

int dijkstra(cell start, cell dest){
	if(!isValid(start) || !isValid(dest))
		return -1;
	int ui,uj,vi,vj,we;
	priority_queue<edge, vector<edge>, greater<edge> > Q;
	Q.push(edge(0,start));
	grid[start.first][start.second] ='0';
	memset(d,64,sizeof(d));
	d[start.first][start.second]=0;
	while(!Q.empty()){
		ui=Q.top().second.first;
		uj=Q.top().second.second;
		Q.pop();
		for(int i=0;i<4;i++){
			vi=ui+dir[i].first;
			vj=uj+dir[i].second;
			if(isValid(cell(vi,vj)) && grid[vi][vj]!='X'){
				if(grid[vi][vj]=='D')
					we=0;
				else
					we=grid[vi][vj]-'0';
				if(d[ui][uj]+we < d[vi][vj]){
					d[vi][vj]=d[ui][uj]+we;
					Q.push(edge(d[vi][vj],cell(vi,vj)));
				}
			}
		}
		grid[ui][uj]='X';
		if(ui==dest.first && uj==dest.second)
			return d[ui][uj];
	}
	return -1;
}

cell findS(){
	for(int i=0;i<R;i++)
		for(int j=0;j<C;j++)
			if(grid[i][j]=='S')
				return cell(i,j);
	return cell(-1,-1);
}

cell findD(){
	for(int i=R-1;i>=0;i--)
		for(int j=0;j<C;j++)
			if(grid[i][j]=='D')
				return cell(i,j);
	return cell(-1,-1);
}

int main(){
	cin >> C >> R;
	while(C || R){
		for(int i=0;i<R;i++)
			scanf("%s",grid[i]);
		cout << dijkstra(findS(),findD()) << endl;
		cin >> C >> R;
	}
	return 0;
}
