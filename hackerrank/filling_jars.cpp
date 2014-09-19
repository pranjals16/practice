#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int m,n,a,b,c;
	cin >> m >> n;
	int arr[m];
	for(int i=0;i<m;i++)
		arr[i]=0;
	while(n--){
		cin >> a >> b >> c;
		for(int i=a-1;i<b;i++)
			arr[i]+=c;
	}
	int sum=0;
	for(int i=0;i<m;i++)
		sum+=arr[i];
	cout << sum/m << endl;
	return 0;
}

