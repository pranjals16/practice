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
		int x,y,k,count=0;
		cin >> x >> y;
		vector<string> m;
		string s;
		for(int i=0;i<x;i++){
			cin >> s;
			m.push_back(s);
		}
		cin >> k;
		if(!m[0][-1])
			cout << "hello" << endl;
		/*for(int i=0;i<x;i++){
			for(int j=0;j<y;j++){
				if(i==0){
					
				}
			}
		}*/
	}
	return 0;
}

