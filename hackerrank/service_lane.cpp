#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n,t;
	cin >> n >> t;
	int arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	while(t--){
		int a,b;
		cin >> a >> b;
		int min=arr[a];
		for(int i=a+1;i<=b;i++){
			if(arr[i]<min)
				min=arr[i];
		}
		cout << min << endl;
	}
	return 0;
}

