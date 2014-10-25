#include<iostream>
#include<map>
#include<string>
#include<cstdio>

using namespace std;

int main(){
	int t,iter=1,n,val;
	cin >> t;
	while(t--){
		cin >> val >> n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];
		map<int,int> mp;
		for(int i=0;i<n;i++){
			if(mp.find(arr[i])==mp.end())
				mp[val-arr[i]]=i;
			else{
				cout << "Case #" << iter++ << ": " << mp[arr[i]]+1 << " " << i+1 << endl;
				break;
			}
		}
		//cout << "Case #" << iter++ << ": ";
	}
	return 0;
}
