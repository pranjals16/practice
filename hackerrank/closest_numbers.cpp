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
	sort(arr,arr+n);
	int min=arr[1]-arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]-arr[i-1]< min)
			min=arr[i]-arr[i-1];
	}
	for(int i=0;i<n-1;i++){
		if((arr[i+1]-arr[i])==min)
			cout << arr[i] << " " << arr[i+1] << " ";
	}
	cout << endl;
	return 0;
}

