#include<iostream>
#include<map>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<climits>
using namespace std;
int main(){
	int n;
	cin >> n;
	while(n){
		map<int,int> mp1,mp2;
		int temp;
		for(int i=1;i<=n;i++){
			cin >> temp;
			mp1[temp]=i;
		}
		for(int i=1;i<=n;i++)
			mp2[mp1[i]]=i;
		map<int,int>::iterator it1,it2;
		bool flag=true;
		for(int i=1;i<=n;i++){
			it1=mp1.find(i);
			it2=mp2.find(i);
			if((*it1).second==(*it2).second)
				continue;
			else{
				flag=false;
				break;
			}
		}
		if(flag)
			cout << "ambiguous\n";
		else
			cout << "not ambiguous\n";
		cin >> n;
	}
	return 0;
}
