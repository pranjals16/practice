#include <cstdio>
#include<iostream>
#include<vector>
#include<map>
#include<cstring>
#include<string>
#include<algorithm>
#include<limits.h>
using namespace std;


int main() {
	int t,n,c,iter=1;
	cin >> t;
	while(t--){
		cin >> n >> c;
		vector<int> arr(n);
		for(int i=0;i<n;i++)
			cin >> arr[i];
		sort(arr.begin(),arr.end(),greater<int>());
		int count=0;
		while(1){
			if(arr.size()==1){
				count++;
				break;
			}
			if(arr.size()==0)
				break;
			int j=1,index=0;
			int min=c-arr[0];
			int min1=INT_MAX;
			while(j<arr.size()){
				if(abs(arr[j]-min) < min1){
					index=j;
					min1=abs(arr[j]-min);
				}
				j++;
			}
			//cout << index << endl;
			arr.erase(arr.begin());
			arr.erase(arr.begin()+index-1);
			//cout << "here\n" << arr.size() << endl;
			count++;
			//cout << count << endl;
		}
		cout << "Case #" << iter++ << ": " << count << endl;
	}
	return 0;
}
