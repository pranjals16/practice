#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include<string>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--){
		int iter;
		cin >> iter;
		string s;
		cin >> s;
		int n=s.size();
		vector<int> val(8,0);
		for(int i=0;i<n-2;i++){
			string t="";
			t+=(s[i]);
			t+=s[i+1];
			t+=s[i+2];
			if(t=="TTT")
				val[0]++;
			else if(t=="TTH")
				val[1]++;
			else if(t=="THT")
				val[2]++;
			else if(t=="THH")
				val[3]++;
			else if(t=="HTT")
				val[4]++;
			else if(t=="HTH")
				val[5]++;
			else if(t=="HHT")
				val[6]++;
			else if(t=="HHH")
				val[7]++;
		}
		cout << iter << " ";
		for(int i=0;i<8;i++)
			cout << val[i] << " ";
		cout << endl;
	}
	return 0;
}
