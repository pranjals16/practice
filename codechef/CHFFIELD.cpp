#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
int isPrime(int number){
	int i;
	for (i=2;i*i<=number;i++){
		if(number%i==0) 
			return 0;
	}
	return 1;
}
int main(){
	long long int t,l,b;
	cin >> t;
	while(t--){
		cin >> l >> b;
		//cout << l << "---" << b << endl;
		if(l==2 || l==3)
			l=1;
		if(b==2 || b==3)
			b=1;
		long long int temp;
		if(isPrime(l) && l!=1)
			l-=1;
		if(isPrime(b) && b!=1)
			b-=1;
		temp=l*b;
		cout << temp << endl;
	}
	return 0;
}
