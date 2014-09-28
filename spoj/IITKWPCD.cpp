#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
	int t,n;
	double s,ans;
	cin >> t;
	while(t--){
		ans=0.000000;
		cin >> n;
		vector<int> arr(n);
		for(int i=0;i<n;i++)
			cin >> arr[i];
		sort(arr.begin(),arr.end(),greater<int>());
		for(int i=0;i<n;i++){
			if(((i+2)<n) && (arr[i]<(arr[i+1]+arr[i+2]))){
				s=(arr[i]+arr[i+1]+arr[i+2])/(double)2;
				ans+=sqrt(s*(s-arr[i])*(s-arr[i+1])*(s-arr[i+2]));
				i+=2;
			}
		}
		printf("%.6lf\n",ans);
	}
	return 0;
}
