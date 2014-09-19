#include <iostream>
#include <cstdio>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n,m;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	cin >> m;
	int b[m];
	for(int i=0;i<m;i++)
		cin >> b[i];
	sort(a,a+n);
	sort(b,b+m);
	int c[m];
	int i=0,j=0,k=0;
	while(i<m){
		if(j<n){
			if(a[j]==b[i]){
				i++;
				j++;
			}
			else{
				c[k]=b[i];
				i++;
				k++;
			}
		}
		else{
			c[k]=b[i];
			i++;
			k++;
		}
	}
	i=0;
	while(i<k){
		cout << c[i]<<" ";
		while(c[i+1]==c[i] && i<k)
			i++;
		i++;
	}
	cout <<  endl;
	return 0;
}
