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

bool bfs(vector<int> graph[],int i, int n){
	bool visited[n+1];
	for(int k=0;k<=n;k++)
		visited[k]=false;
	queue<int> q;
	q.push(i);
	int count=0,p,l;
	while(!q.empty()){
		p=q.front();
		q.pop();
		visited[p]=true;
		for(int k=0;k<graph[p].size();k++){
			l=graph[p][k];
			if(visited[l])
				return false;
			else
				q.push(l);
		}
		count++;
	}
	if(count!=n)
		return false;
	else
		return true;
}


int main()
{
	int n,m;
	cin >> n >> m;
	vector<int> graph[n+1];
	int u,v;
	for(int i=0;i<m;i++){
		cin >> u >> v;
		graph[u].push_back(v);
	}
	if(bfs(graph,1,n))
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}
