#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stack>
#include<vector>
#include<math.h>
using namespace std;
void dfs(vector<int> tree[], vector<bool> visited, int dp[][2],int n, int s){
	visited[s]=true;
	int i;
	int ma=0,mi=0;
	for(i=0;i<tree[s].size();i++){
		if(!visited[tree[s][i]]){
			dfs(tree,visited,dp,n,tree[s][i]);
			ma+=dp[tree[s][i]][1];
			mi+=min(dp[tree[s][i]][1],dp[tree[s][i]][0]);
		}
	}
	dp[s][0]=ma;
	dp[s][1]=mi+1;
}
int main(){
	int n,u,v;
	cin >> n;
	vector<int> tree[n+1];
	for(int i=0;i<n-1;i++){
		cin >> u >> v;
		tree[u].push_back(v);
		tree[v].push_back(u);
	}
	int dp[n+1][2];
	vector<bool> visited(n+1,false);
	dfs(tree,visited,dp,n,1);
	cout << min(dp[1][0],dp[1][1]) << endl;
	return 0;
}
