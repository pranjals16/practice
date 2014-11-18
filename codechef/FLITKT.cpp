#include<iostream>
#include<cstdio>
#include<string>
#include<map>
#include<vector>
using namespace std;
#define MAX 5000
int n;
struct itin{
	string src;
	string dst;
};
int main(){
	int t,iter=1;
	cin >> t;
	while(t--){
		cin >> n;
		string a,b;
		struct itin x[n];
		map<string,int> mp;
		for(int i=0;i<n;i++){
			cin >> a >> b;
			x[i].src=a;
			x[i].dst=b;
			mp[a]++;
			mp[b]++;
		}
		map<string,int>::iterator it;
		string first,second;
		bool flag=false;
		for(it=mp.begin();it!=mp.end();it++){
			if((*it).second==1 && !flag){
				first=(*it).first;
				flag=true;
			}
			else if((*it).second==1 && flag){
				second=(*it).first;
			}
		}
		string orig,fin;
		for(int i=0;i<n;i++){
			if(first==x[i].src){
				orig=first;
				fin=second;
				break;
			}
			else if(second==x[i].src){
				orig=second;
				fin=first;
				break;
			}
		}
		int i=0;
		while(i<n){
			if(orig==x[i].src){
				cout << x[i].src << "-" << x[i].dst << " ";
				orig=x[i].dst;
				i=0;
			}
			else
				i++;
			/*if(orig==x[i].src && fin==x[i].dst){
				cout << x[i].src << "-" << x[i].dst;
				break;
			}*/
		}
		//cout << orig << " " << fin << endl;
		cout << endl;
	}
	return 0;
}
