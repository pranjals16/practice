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
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		string a,b,s;
		struct itin x[n];
		map<string,int> mp;
		for(int i=0;i<n;i++){
			cin >> s;
			a=s[0];
			b=s[s.size()-1];
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
		int count=0;
		while(i<n){
			if(orig==x[i].src){
				//cout << x[i].src << "-" << x[i].dst << " ";
				count++;
				orig=x[i].dst;
				i=0;
			}
			else
				i++;
		}
		if(count==n)
			cout << "Ordering is possible.\n";
		else
			cout << "The door cannot be opened.\n";
	}
	return 0;
}
