#include <cmath>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <map>
using namespace std;

int main() {
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];
		int temp=arr[0];
		for(int i=1;i<n;i++)
			temp=arr[i]-temp;
		if(temp==0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;

}
