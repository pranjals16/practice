#include<iostream>
#include<cstdio>
#include<string>
#include<map>
#include<vector>
using namespace std;

vector<string> graph(305);
int visited[305][305];
int dx[]={-1,0,1,-1,1,-1,0,1};
int dy[]={-1,-1,-1,0,0,1,1,1};
int n;

bool isSafe(int i, int j){
	if(i>=0 && i<n && j>=0 && j<n && graph[i][j]!='*')
		return true;
	else
		return false;
}
void dfs(int i, int j){
	if(visited[i][j]) return;
	visited[i][j]=1;
	if(graph[i][j]=='1' || graph[i][j]=='*') return;
	for(int k=0;k<8;k++){
		if(isSafe(i+dx[k],j+dy[k]))
			dfs(i+dx[k],j+dy[k]);
	}
}
int main(){
	int t,iter=1;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0;i<n;i++)
			cin >> graph[i];
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				visited[i][j]=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(graph[i][j]=='*'){
					for(int k=0;k<8;k++){
						int cx=i+dx[k];
						int cy=j+dy[k];
						if(isSafe(cx,cy))
							graph[cx][cy]='1';
					}
				}
			}
		}
		int count=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(visited[i][j]==0 && graph[i][j]!='*'){
					if(graph[i][j]=='.'){
						dfs(i,j);
						count++;
					}
				}
			}
		}
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				if(visited[i][j]==0 && graph[i][j]=='1')
						count++;
		printf("Case #%d: ", iter++);
		cout << count << endl;
	}
	return 0;
}
