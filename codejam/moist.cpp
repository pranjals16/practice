#include<iostream>
#include<cstdio>
#include<string>
#include<map>

using namespace std;

int main(){
	int t,n,iter=1;
	cin >> t;
	
	while(t--){
		cin >> n;
		string s[n];
		string temp="";
		int ans=0;
		cin.ignore();
		for(int i=0;i<n;i++){
			getline(cin,s[i]);
			//cout << s[i] << endl;
			if(i==0)
				temp=s[i];
			else{
				if(s[i]<temp)
					ans++;
				else
					temp=s[i];
			}
		}
		cout << "Case #" << iter++ << ": " << ans << endl;
	}
	return 0;
}
