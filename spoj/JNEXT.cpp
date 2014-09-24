#include<iostream>
#include<cmath>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		vector<int> arr(n);
		for(int i=0;i<n;i++)
			cin >> arr[i];
		if(n==1){
			cout << "1\n";
			continue;
		}
		else{
			int count=0;
			while(true){
				int max_index=max_element((arr).begin(),(arr).end())-arr.begin();
				++count;
				if(max_index==m) break;
				rotate(arr.begin(),arr.begin()+max_index+1,arr.end());
				m=(m+(int)(arr).size()-max_index-1)%(int)(arr).size();
				arr.pop_back();
			}
			cout << count << endl;
		}
	}
	return 0;
}
