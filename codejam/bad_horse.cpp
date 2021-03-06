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
		map<string,int> mp;
		string a,b;
		bool flag=true;
		for(int i=0;i<n;i++){
			cin >> a >> b;
			if(i==0){
				mp[a]=1;
				mp[b]=2;
			}
			else{
				if(mp.find(a)!=mp.end() && mp.find(b)==mp.end()){
					int temp=mp[a];
					if(temp==1)
						mp[b]=2;
					else
						mp[b]=1;
				}
				else if(mp.find(a)==mp.end() && mp.find(b)!=mp.end()){
					int temp=mp[b];
					if(temp==1)
						mp[a]=2;
					else
						mp[a]=1;
				}
				else if(mp.find(a)!=mp.end() && mp.find(b)!=mp.end()){
					int temp1=mp[a],temp2=mp[b];
					if(temp1==temp2){
						flag=false;
						break;
					}
				}
			}
		}
		if(!flag)
			cout << "Case #" << iter++ << ": " << "No" << endl;
		else
			cout << "Case #" << iter++ << ": " << "Yes" << endl;
	}
	return 0;
}
