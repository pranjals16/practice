#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int t,n,c,m;
	cin>>t;
	while(t--){
		cin>>n>>c>>m;
		int answer=0;
		answer=n/c;
		int wrapper=answer;
		while(wrapper/m){
			answer+=wrapper/m;
			wrapper=wrapper/m+wrapper%m;
		}
		cout<<answer<<endl;
	}
	return 0;
}

