#include<iostream>
#include<stack>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<climits>
using namespace std;

int main(){
	int n,a,b,sum1=0,sum2=0,max1=INT_MIN,max2=INT_MIN;
	cin >> n;
	while(n--){
		cin >> a >> b;
		sum1+=a;
		sum2+=b;
		if(sum1 >= sum2 && sum1-sum2 > max1)
			max1= sum1-sum2;
		if(sum2 >= sum1 && sum2-sum1 > max2)
			max2= sum2-sum1;
	}
	if(max1 > max2)
		cout << "1 " << max1 << endl; 
	else
		cout << "2 " << max2 << endl; 
	return 0;
}
