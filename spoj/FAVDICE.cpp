#include<iostream>
#include<stack>
#include<cstdlib>
#include<string>
#include<cstdio>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		float n;
		cin >> n;
		float sum=0;
		for(float i=1;i<=n;i++)
			sum+=n/i;
		printf("%.2f\n",sum);
	}
	return 0;
}
