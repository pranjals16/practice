#include<iostream>
#include<cstdio>
#include<string>
#include<map>
#include<vector>
using namespace std;
int main(){
	int t;
	cin >> t;
	long long int n;
	while(t--){
		cin >> n;
		long long int a=1,b=1,c;
		if(n==1){
			cout << "is fibo\n";
			continue;
		}
		while(1){
			c=a+b;
			if(c==n){
				cout << "is fibo\n";
				break;
			}
			else if(c>n){
				cout << "not fibo\n";
				break;
			}
			else{
				a=b;
				b=c;
			}
		}
	}
	return 0;
}
