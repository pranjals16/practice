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
		string s;
		cin >> s;
		int n=s.size();
		int tot=0,vow=0;
		for(int i=0;i<n;i++){
			if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)){
				tot++;
				if(s[i]==97 || s[i]==101 || s[i]==105 || s[i]==111 || s[i]==117 || s[i]==121 || s[i]==65 || s[i]==69 || s[i]==73 || s[i]==79 || s[i]==85 || s[i]==89 )
					vow++;
			}
		}
		cout << vow << " " << tot-vow << endl;
	}
	return 0;
}
