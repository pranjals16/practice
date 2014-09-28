#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>
using namespace std;

long long gcd(long long a, long long b)
{
	if(b==0)
		return a;
	else
		gcd(b, a%b);
}

int main(){
	int t;
	scanf("%i", &t);
	while(t--){
		long long x;
		scanf("%lli", &x);
		for(long long j=x/2; j>0; j--){
			if(gcd(x, j)==1){
				printf("%lli\n", j);
				break;
			}
		}
	}
	return 0;
}
