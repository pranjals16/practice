#include <cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include <cmath>
#include<string>
using namespace std;
int main(){
	int n;
	int arr[100001];
	while(cin >> n){
		if(n==0)
			return 0;
		for(int i=1;i<=n;i++)
			cin >> arr[i];
		bool flag=true;
		for(int i=1;i<=n;i++){
			if(arr[arr[i]]!=i){
				flag=false;
				break;
			}
		}
		if(flag)
			cout <<"ambiguous\n";
		else
			cout << "not ambiguous\n";
	}
	return 0;
}
