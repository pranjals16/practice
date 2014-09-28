#include <cmath>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];
		int i;
		for(i=0;i<n;i++){
			if(arr[i]>i){
				cout << "NO\n";
				break;
			}
		}
		if(i==n) cout << "YES\n";
	}
	return 0;
}
