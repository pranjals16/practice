#include <iostream>
#include <string>
#include <cmath>
using namespace std;

 
int main()
{
	int n=29;
	int temp1=n,digits=0;
	while(temp1){
		digits++;
		temp1/=10;
	}
	int ans=0,pow=10,temp=1;
	digits++;
	while(digits--){
		//cout << temp << endl;
		if(n%pow>=((pow*2)/10))
			ans+=((n/pow)*temp+temp);
		else
			ans+=((n/pow)*temp);
		pow=pow*10;
		temp*=10;
		//cout << ans << endl;
	}
	cout << ans << endl;
	return 0;
}
