#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<math.h>
using namespace std;
#define MOD 1000000007
long long int power(long long int x, long long int y)
{
    long long int temp;
    if( y == 0)
        return 1;
    temp = power(x, y/2);
    if (y%2 == 0)
        return (temp*temp)%MOD;
    else
        return (x*temp*temp)%MOD;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long int n,temp,count=0,res=1;
		cin >> n;
		temp=n;
		while(temp){
			if((temp%2)==1)
				count++;
			temp/=2;
		}
		temp=n*count;
		cout << power(2,temp) << endl;
	}
	return 0;
}
