#include<iostream>
#include<string>
#include<vector>
#include<climits>
using namespace std;
#define MAX 6
int gcount=INT_MAX;
int arr[MAX][MAX],m,n;
bool visited[MAX][MAX]={false};
int dx[]={0,1,1,1,0,-1,-1,-1};
int dy[]={1,1,0,-1,-1,-1,0,1};
bool isSafe(int x ,int y){
	if(x>=0 && x<m && y>=0 && y<n)
		return true;
	else
		return false;
}
void dfs(int i,int j,int count){
	if(i==(m-1) && j==(n-1)){
		gcount=min(gcount,count);
		return;
	}
	visited[i][j]=true;
	for(int l=0;l<8;l++){
		if(isSafe(i+dx[l],j+dy[l]) && !visited[i+dx[l]][j+dy[l]] && arr[i+dx[l]][j+dy[l]]){
			count++;
			dfs(i+dx[l],j+dy[l],count);
			count--;
		}
	}
}
int main(){
	cin >>  m >> n;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin >> arr[i][j];
	dfs(0,0,0);
	if(gcount==INT_MAX)
		cout << "-1\n";
	else
		cout << gcount << endl;
	return 0;
}
