#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long result(int arr[], int n){
	long temp[n];
	for(int i=0;i<n;i++)
		temp[i]=0;
	temp[0]=arr[0];
	for(int i=1;i<n;i++)
		temp[i]+=temp[i-1]+arr[i];
	long table[n];
	for(int i=0;i<n;i++)
		table[i]=0;
	table[0]=arr[0];
	table[1]=table[0]+arr[1];
	table[2]=table[1]+arr[2];
	for(int i=3;i<n;i++){
		long m=temp[i-1]+arr[i]-table[i-1];
		long n=temp[i-2]+arr[i]+arr[i-1]-table[i-2];
		long o=temp[i-3]+arr[i]+arr[i-1]+arr[i-2]-table[i-3];
		table[i]=max(m,max(n,o));
	}
	return table[n-1];
}

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];
		int reverse[n];
		int j=n-1;
		int i=0;
		while(j>=0){
			reverse[j]=arr[i];
			i++;
			j--;
		}
		cout << result(reverse,n) << endl;
	}
	return 0;
}

