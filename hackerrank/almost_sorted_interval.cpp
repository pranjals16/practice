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
	int count=0;
	for(int i=0;i<n;i++){
		int j=i;
		while(arr[j+1]>arr[j] && j<n-1){
			count++;
			j++;
			cout <<arr[j] << "*****" << arr[j+1] << "****" << count << endl;
		}
	}
	cout << count+n << endl;
	return 0;
}

