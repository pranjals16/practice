#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		ll arr[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];
		sort(arr,arr+n);
		ll min=1000000000;
		int i=0;
		int j=k-1;
	
		while(j<n){
			if(arr[j]-arr[i]<min)
				min = arr[j]-arr[i];
			i++;
			j++;
		}
		cout << min << endl;
	}
	return 0;
}
