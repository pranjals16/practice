#include<iostream>
#include<cmath>
#include<cstdio>
#include<map>
#define ll long long
using namespace std;

int main()
{
	int n;
	cin >> n;
	ll arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	ll res=arr[0];
	for(int i=1;i<n;i++)
		res=res^arr[i];
	cout << res << endl;
}
