#include<iostream>
#include<cstdio>
#include<deque>
#include<algorithm>
#include<math.h>
 
#define MOD 1000000009
 
using namespace std;
typedef long long int L;
int main(){
	int t;
	L n;
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&n);
		L arr[51000],sum=0LL;
		L cnt=1LL;
		L zeroCount=0LL;
		int allNegative=1;
		 
		for(int i=0;i<n;i++){
			scanf("%lld",&arr[i]);
			if(arr[i]>0){
				sum+=(long long)arr[i];
				allNegative=0;
			}
			else if(arr[i]==0){
				allNegative=0;
				zeroCount++;
			}
		}
		sort(arr,arr+n);
		if(sum==0){
			if(allNegative==1){
				sum=arr[n-1];
				for(int j=n-2;j>=0;j--){
					if(sum==arr[j])
					cnt++;
					else
					break;
				}
			}
			else{
				L num=1;
				for(L k=0;k<zeroCount;k++)
					num=(L)(num*2)%MOD;
				cnt=num-1;
			}
		}
		else{
			L num=1;
			for(L k=0;k<zeroCount;k++)
				num=(L)(num*2)%MOD;
			cnt=num;
		}
		cnt=cnt%MOD;
		printf("%lld %lld\n",sum,cnt);
	}
 
}
