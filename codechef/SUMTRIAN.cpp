#include<iostream>
#include<vector>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<climits>
using namespace std;
int arr[105][105];
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=i;j++){
				cin >> arr[i][j];
				arr[i][j]+=max(arr[i-1][j],arr[i-1][j-1]);
			}
				
		int maxs=0;
		for(int i=1;i<=n;i++)
			maxs=max(maxs,arr[n][i]);
		cout << maxs << endl;
	}
	return 0;
}
