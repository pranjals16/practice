#include<iostream>
#define ll long long
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		int arr[n];
		for(ll i=0;i<n;i++)
			cin >> arr[i];
		ll index=0,count=1;
		for(ll i=1;i<n;i++){
			if(arr[index]==arr[i]){
				count++;
				continue;
			}
			else
				count--;
			if(count==0){
				index=i;
				count=1;
			}
		}
		count=0;
		int val=arr[index];
		for(ll i=0;i<n;i++){
			if(arr[i]==val)
				count++;
		}
		if(count >n/2)
			cout << "YES " << val << endl;
		else
			cout << "NO\n";
	}
	return 0;
}
