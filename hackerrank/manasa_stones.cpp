#include <cmath>
#include <set>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int t;
	cin >> t;
	while(t--){
		int n,a,b;
		cin >> n >> a >> b; 
		set<int> res;
		for(int i=0;i<n;i++)
			res.insert(i*a+(n-i-1)*b);
		set<int>::iterator iter;
		for(iter=res.begin();iter!=res.end();++iter)
			cout << *iter << " ";
		cout << endl;
	}
	return 0;
}

