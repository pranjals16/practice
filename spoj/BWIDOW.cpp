#include<iostream>
#include<cstdio>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int t,n,a,b;
	cin >> t;
	while(t--){
		cin >> n;
		vector<pair<int,int> > arr,arr1;
		for(int i=0;i<n;i++){
			cin >> a >> b;
			arr.push_back(make_pair(a,b));
			arr1.push_back(make_pair(a,b));
		}
		sort(arr.begin(),arr.end(),greater<pair<int,int> >());
		bool flag=true;
		for(int i=1;i<n;i++){
			if(arr[i].second<arr[0].first)
				continue;
			else{
				flag=false;
				break;
			}
		}
		if(flag){
			for(int i=0;i<n;i++){
				if(arr[0].first==arr1[i].first && arr[0].second==arr1[i].second)
					cout << i+1;
			}
		}
		else
			cout << "-1";
		cout << endl;
	}
	return 0;
}
