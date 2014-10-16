#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>
using namespace std;

int main(){
	int t,iter=1;
	cin >> t;
	while(t--){
		long long int n;
		cin >> n;
		long long int srt=sqrt(n);
		if(srt*srt==n)
			cout << "Case " << iter++ << ": Yes\n";
		else
			cout << "Case " << iter++ << ": No\n";
	}
	return 0;
}
