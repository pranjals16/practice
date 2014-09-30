#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <vector>
using namespace std;

int solve(int n){
	if(n==1)
		return 1;
	else
		return (n - pow( 2 , (int)floor((log(n))/(log(2))) ))*2 + 1;
}

int main(){
	string s;
	cin >> s;
	while(s[0]!='0' || s[1]!='0' || s[3]!='0'){
		int n=(10*(s[0]-'0')+(s[1]-'0'))*pow(10,s[3]-'0');
		cout << solve(n) << endl;
		cin >> s;
	}
	return 0;
}
