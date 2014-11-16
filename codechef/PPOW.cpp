#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int n,rem,sum;
int main(){
	long int t;
	int a,b,iter=1;;
	cin >> t;
	while(t--){
		cin >> a >> b;
		vector<int> digits(50000);
		digits[0]=a;
		digits[1]=a;
		for(int k=2;k<b+1;k++){
			for(int i=1;i<=digits[0];i++){
				digits[i]=digits[i]*a+rem;
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
			//cout << digits[i];
		}
		cout << "Case " << iter++ << ": " << sum << endl;
		rem=0;
		sum=0;
	}
	return 0;
}
