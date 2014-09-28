#include<stdio.h>
#include<string>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
		arr[i]--;
	}
	vector<bool> visited(n,false);
	int res=0;
	for(int i=1;i<n;i++){
		if(!visited[i]){
			for(int j=i,k=arr[i];j<n;j++){
				if(arr[j]==k){
					visited[j]=true;
					k+=arr[i];
				}
			}
			res++;
		}
	}
	cout << res << endl;
	return 0;
}
