#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <stdlib.h>
using namespace std;

int main(){
	int m,n;
	cin >> m >> n;
	while(m && n){
		int a[m],b[n];
		for(int i=0;i<m;i++)
			cin >> a[i];
		for(int i=0;i<n;i++)
			cin >> b[i];
		sort(a,a+m);
		sort(b,b+n);
		if(a[0] < b[1])
			cout << "Y" << endl;
		else
			cout << "N" << endl;
		cin >> m >> n;
	}
	return 0;
}
