#include <cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n){
		long long int candy[n],price[n];
		for(int i=0;i<n;i++)
			cin >> candy[i];
		for(int i=0;i<n;i++)
			cin >> price[i];
		sort(candy,candy+n);
		sort(price,price+n,greater<int>());
		long long int sum=0;
		for(int i=0;i<n;i++) 
			sum+=candy[i]*price[i];
		cout << sum << endl;
		cin >> n;
	}
	return 0;
}
