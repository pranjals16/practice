#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n=s.size();
		int count=0;
		for(int i=1;i<n;i++){
			if(s[i]==s[i-1])
				count++;
		}
		cout << count << endl;
	}
	return 0;
}

