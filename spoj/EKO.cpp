#include <cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int height[n],max=0;
	for(int i=0;i<n;i++){
		cin >> height[i];
		if(height[i]>max)
			max=height[i];
	}
	int st=0,ed=max+1,mid,res;
	while(st<ed){
		int wood=0;
		mid=st+(ed-st)/2;
		for(int i=0;i<n;i++){
			if(height[i]>mid)
				wood+=height[i]-mid;
		}
		if(wood<m)
			ed=mid;
		else{
			st=mid+1;
			res=mid;
		}
		
	}
	cout << mid << endl;
	return 0;
}
