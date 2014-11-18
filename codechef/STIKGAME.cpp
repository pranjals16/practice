#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main(){
	int n;
	cin >> n;
	while(n){
		long long int arr[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];
		sort(arr,arr+n);
		int ans=0;
		for(int i=0;i<n-2;i++){
			int k=0;
			int r=n-i-2;
			while(k<r){
				if(arr[k]+arr[r]<arr[n-i-1]){
					ans+=r-k;
					k++;
				}
				else 
					r--;
			}
		}
		cout << ans << endl;
		cin >> n;
	}
	return 0;
}
