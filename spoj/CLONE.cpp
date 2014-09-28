#include<iostream>
#include<cmath>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
using namespace std;

int main()
{
	int m,n;
	cin >> n >> m;
	while(n && m){
		map<string,int> code;
		string s;
		for(int i=0;i<n;i++){
			cin >> s;
			code[s]++;
		}
		vector<int> arr(n,0);
		for( map<string,int>::iterator ii=code.begin(); ii!=code.end(); ++ii)
			arr[((*ii).second)-1]++;
//			cout << (*ii).first << ": " << (*ii).second << endl;
		for(int i=0;i<n;i++)
			cout << arr[i] << endl;
		cin >> n >> m;
	}
	return 0;
}
