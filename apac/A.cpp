#include<iostream>
#include<cstdio>
#include<string>
#include<queue>
#include<vector>
using namespace std;
#define MAX 1000
int n,arr[MAX][MAX];
int cnt[MAX*MAX];

int bfs(int i, int j){
	queue<pair<int,int> > q;
	bool visited[MAX][MAX]={false};
	q.push(make_pair(i,j));
	visited[i][j]=true;
	int count=1;
	while(!q.empty()){
		//cout << i << " " << j << endl;
		pair<int,int> p=q.front();
		i=p.first;
		j=p.second;
		q.pop();
		visited[i][j]=true;
		if(i-1>=0 && !visited[i-1][j] && arr[i-1][j]==1+arr[i][j]){
			q.push(make_pair(i-1,j));
			count++;
		}
		if(i+1<n && !visited[i+1][j] && arr[i+1][j]==1+arr[i][j]){
			q.push(make_pair(i+1,j));
			count++;
		}
		if(j-1>=0 && !visited[i][j-1] && arr[i][j-1]==1+arr[i][j]){
			q.push(make_pair(i,j-1));
			count++;
		}
		if(j+1<n && !visited[i][j+1] && arr[i][j+1]==1+arr[i][j]){
			q.push(make_pair(i,j+1));
			count++;
		}
		//count--;	
	}
	return count;
}
int main(){
	int t,iter=1;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin >> arr[i][j];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cnt[arr[i][j]]=bfs(i,j);
			}
		}
		int maxi=1,maxval=1;
		for(int i=0;i<n*n;i++){
			if(cnt[i]>maxval){
				maxval=cnt[i];
				maxi=i;
			}
				
		}
		printf("Case #%d: ", iter++);
		cout << maxi << " " << maxval;
		cout << endl;
	}
	return 0;
}
