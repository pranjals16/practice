#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<map>
int n,rem,sum;
using namespace std;
int main(){
	cin >> n;
	vector<int> digits(5000);
	digits[0]=1;
	digits[1]=1;
	for(int k=2;k<n+1;k++){
		for(int i=1;i<=digits[0];i++){
			digits[i]=digits[i]*k+rem;
			rem=0;
			if(digits[i]>9){
				rem=digits[i]/10;
				digits[i]%=10;
				if(i==digits[0])
					digits[0]++;
			}
		}
	}
	for(int i=digits[0];i>=1;i--){
		sum=sum+digits[i];
		cout << digits[i];
	}
	cout << endl;
	cout << sum << endl;
	return 0;
}
