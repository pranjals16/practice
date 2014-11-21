#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	int ugly[n+1],val;
	int i2_idx=0,i3_idx=0,i5_idx=0,i2=2,i3=3,i5=5;
	ugly[0]=1;
	for(int i=1;i<=n;i++){
		val=min(i2,min(i3,i5));
		ugly[i]=val;
		if(val==i2){
			i2_idx+=1;
			i2=ugly[i2_idx]*2;
		}
		if(val==i3){
			i3_idx+=1;
			i3=ugly[i3_idx]*3;
		}
		if(val==i5){
			i5_idx+=1;
			i5=ugly[i5_idx]*5;
		}
	}
	cout << ugly[n] << endl;
	return 0;
}
