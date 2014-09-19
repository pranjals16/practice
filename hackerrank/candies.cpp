#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	int candyl[n];
	int candyr[n];
	
	for(int i=0;i<n;i++){
		candyl[i]=1;
		candyr[i]=1;
	}
	
	for(int i=1;i<n;i++){
		if(arr[i]>arr[i-1] )
			candyl[i]=candyl[i-1]+1;
	}
	
	for(int i=n-2;i>=0;i--){
		if(arr[i]>arr[i+1] )
			candyr[i]=candyr[i+1]+1;
	}
	
	int count=0;
	for(int i=0;i<n;i++)
		count+=max(candyl[i],candyr[i]);
		
	cout << count << endl;
	return 0;
}

