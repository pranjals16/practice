#include<iostream>
#include<cstdio>
#include<string>
#include<queue>
#include<vector>
using namespace std;
#define MAX 10
int n,arr[MAX][MAX];

void bfs(int i, int j){
	queue<pair<int,int> > q;
	bool visited[MAX][MAX]={false};
	q.push(make_pair(i,j));
	visited[i][j]=true;
	while(!q.empty()){
		pair<int,int> p=q.front();	
	}
}
int main(){
	int t,iter=1;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin >> arr[i][j];
		/*for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				//bfs(i,j);
			}
		}*/
		printf("Case #%d: ", iter++);
	}
	return 0;
}
