#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main(){
	map<pair<int,int>,string> code;
	int t,n,a,b;
	string s;
	cin >> n;
	while(n--){
		cin >> a >> b >> s;
		code[make_pair(a,b)]=s;
	}
	cin >> t;
	while(t--){
		cin >> a >> b;
		cout << code[make_pair(a,b)] << endl;
	}
	return 0;
}
