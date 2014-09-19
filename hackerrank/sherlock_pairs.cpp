#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];
		sort(arr,arr+n);
		int count=1;
		int ans=0;
		for(int i=0;i<n-1;i++){
			if(arr[i]==arr[i+1])
				count++;
			else{
				ans+=count*(count-1);
				count=1;
			}
		}
		cout << ans << endl;
	}
	return 0;
}

