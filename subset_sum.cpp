#include<iostream>
#include<string>
#include<ctype.h>
#include<cstdio>
using namespace std;

int main(){
	int sum,n;
	cin >> sum >> n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	bool subs[sum+1][n+1];
	for(int i=0;i<=n;i++)
		subs[0][i]=true;
	for(int i=0;i<=sum;i++)
		subs[i][0]=false;
	for(int i=1;i<=sum;i++){
		for(int j=1;j<=n;j++){
			subs[i][j]=subs[i][j-1];
			if(i>=arr[j-1])
				subs[i][j]=(subs[i][j] || subs[i-arr[j-1]][j-1]);
		}
	}
	cout << subs[sum][n] << endl;
	return 0;
}
