#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main() {
	char operator1;
	long long n, a, res;
	scanf("%lld",&n);
	
	while(n--){
		operator1 = 0;
		scanf("%lld",&res);
		while(1){
			cin >> operator1;
//			scanf("%s",&operator1);
			if(operator1 == '=')
				break;
				
			scanf( "%lld", &a );
			switch(operator1){
				case '+':
					res += a;
					break;
				case '-':
					res -= a;
					break;
				case '*':
					res *= a;
					break;
				case '/':
					res /= a;
					break;
			}
		}
		printf( "%lld\n", res );
	}
	return 0;
}
