#include<iostream>
#include<map>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
	int t,n,m,i;
	cin >> t;
	while(t--){
		cin >> n >> m;
		long long int arr[n],sum1=0,sum2=0;
		for(i=0;i<n;i++)
			cin >> arr[i];
		sort(arr,arr+n);
		for(i=0;i<m;i++)
			sum1+=arr[i];
		for(;i<n;i++)
			sum2+=arr[i];
		cout << abs(sum2-sum1) << endl;
	}
	return 0;
}
