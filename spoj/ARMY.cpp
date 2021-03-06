#include <map>
#include <set>
#include <cmath>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int m,n;
		cin >> m >> n;
		int a[m],b[n];
		for(int i=0;i<m;i++)
			cin >> a[i];
		
		for(int i=0;i<n;i++)
			cin >> b[i];
		sort(a,a+m);
		sort(b,b+n);
		int i=0,j=0;
		
		while(i<m && j<n){
			if(a[i]<b[j])
				i++;
			else
				j++;
		}
		if(i==m){
			cout << "MechaGodzilla" << endl;
			continue;
		}
		else if(j==n){
			cout << "Godzilla" << endl;
			continue;
		}
	}
	return 0;
}
