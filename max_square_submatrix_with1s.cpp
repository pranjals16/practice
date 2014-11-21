#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int row,col;
	cin >> row >> col;
	int arr[row][col];
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
			cin >> arr[i][j];
	int dp[row][col];
	for(int i=0;i<row;i++)
		dp[i][0]=arr[i][0];
	for(int i=0;i<col;i++)
		dp[0][i]=arr[0][i];
	for(int i=1;i<row;i++){
		for(int j=1;j<col;j++){
			if(arr[i][j]==1)
				dp[i][j]=1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
			else
				dp[i][j]=0;
		}
	}
	int maxs=dp[0][0],maxi=0,maxj=0;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(dp[i][j]>maxs){
				maxs=dp[i][j];
				maxi=i;
				maxj=j;
			}
		}
	}
	cout << dp[maxi][maxj] << endl;
	for(int i=maxi;i>maxi-maxs;i--){
		for(int j=maxj;j>maxj-maxs;j--)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++)
			cout << dp[i][j] << " ";
		cout << endl;
	}
	return 0;
}
