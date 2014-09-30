#include <cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n],b[n];
		vector<pair<int,int> > bridge;
		for(int i=0;i<n;i++)
			cin >> a[i];
		for(int i=0;i<n;i++)
			cin >> b[i];
		for(int i=0;i<n;i++){
			int x=a[i];
			int y=b[i];
			bridge.push_back(make_pair(x,y));
		}
		sort(bridge.begin(),bridge.end());
		vector<int> lis(n,1);

		for(int i=0;i<n;i++)
			for(int j=0;j<i;j++)
				if(bridge[i].second > bridge[j].second && lis[i]<lis[j]+1)
					lis[i]=lis[j]+1;
		int max=0;
		for(int i=0;i<n;i++)
			if(lis[i]>max)
				max=lis[i];
		cout << max << endl;
	}
	return 0;
}
