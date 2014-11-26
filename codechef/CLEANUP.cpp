#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m,temp;
		cin >> n >> m;
		int arr[n+1];
		for(int i=1;i<=n;i++)
			arr[i]=1;
		for(int i=1;i<=m;i++){
			cin >> temp;
			arr[temp]=-1;
		}
		vector<int> tot,chef,ass;
		int i=1;
		for(i=1;i<=n;i++){
			if(arr[i]!=-1)
				tot.push_back(i);
		}
		for(i=0;i<tot.size();i+=2)
			chef.push_back(tot[i]);
		
		for(i=1;i<tot.size();i+=2)
			ass.push_back(tot[i]);
		for(i=0;i<chef.size();i++)
			cout << chef[i] << " ";
		cout << endl;
		for(i=0;i<ass.size();i++)
			cout << ass[i] << " ";
		cout << endl;
	}
	return 0;
}
