#include<iostream>
#include<cmath>
#include<cstdio>
#include<map>
#define ll long long
using namespace std;

ll findval(ll n){
	ll sum=0;
	while(n){
		ll tmp=n%10;
		sum+=(tmp*tmp);
		n=n/10;
	}
	return sum;
}
int main()
{
	int n;
	cin >> n;
	map<ll,bool> check;
	ll val=n;
	if(n==1){
		cout << "1" << endl;
		return 0;
	}
	while(1){
		check[val]=true;
		map<ll, bool>::iterator iter = check.find(val);
		val=findval(val);
		if(val==1){
			cout << "1" << endl;
			return 0;
		}
		if(iter != check.end()){
			cout << "-1\n";
			return 0;
		}
		else
			continue;
	}
	return 0;
}
