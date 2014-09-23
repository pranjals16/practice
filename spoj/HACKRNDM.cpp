#include<iostream>
#include<math.h>
#include<cstdio>
#include<algorithm>
#define ll long long
using namespace std;
int main()
{
	ll n,k;
	cin >> n >> k;
	ll arr[n];
	for(ll i=0;i<n;i++)
		cin >> arr[i];
	sort(arr,arr+n);
	ll i=0,j=0,count=0;
	while(j<n){
		ll temp=arr[j]-arr[i];
		if(temp<k)
			j++;
		else if(temp==k){
			i++;
			j++;
			count++;
		}
		else
			i++;
	}
	cout << count << endl;
	return 0;
}
