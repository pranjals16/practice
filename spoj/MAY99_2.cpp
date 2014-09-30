#include <cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include <cmath>
#include<string>
using namespace std;
void find(long long int n){
	vector<string> dp;
	dp.push_back("u");
	dp.push_back("m");
	dp.push_back("a");
	dp.push_back("n");
	dp.push_back("k");
	if(n<=5)
		cout << dp[n];
	if(n>5){
		string temp="";
		while(n){
			temp+=dp[n%5];
			if(n%5==0)
				n=n/5-1;
			else
				n/=5;
		}
		for(int i=temp.length()-1;i>=0;i--)
			cout << temp[i];
	}
}
int main(){
	long long int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		find(n);
		cout << endl;
	}
	return 0;
}
