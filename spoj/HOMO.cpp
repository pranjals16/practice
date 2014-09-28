#include <cmath>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <map>
using namespace std;

int main(){
	int t;
	cin >> t;
	map<int,int> m;
	while(t--){
		bool homo=false,heter=false;
		int n;
		string s;
		cin >> s >> n;
		if(s[0]=='i')
			m[n]++;
		else if(s[0]=='d'){
			if(m[n])
				m[n]--;
		}
		map<int,int>::iterator it=m.begin();
		int homo_cnt=0,heter_cnt=0;
		
		for(;it!=m.end();it++)
			if(it->second>=2)
				homo_cnt++;

		if(homo_cnt>=2)
			homo=true,heter=true;		
		else if(homo_cnt==1)
			homo=true;
		
		if(!heter){
			for(it=m.begin();it!=m.end();it++)
				if(it->second==1)
					heter_cnt++;
				if(heter_cnt>=2)
					heter=true;
		}
		if(heter_cnt==1 && homo) heter=true;
		
		if(homo && heter)
			cout << "both\n";
		else if(homo && !heter)
			cout << "homo\n";
		else if(!homo && heter)
			cout << "hetero\n";
		else
			cout << "neither\n";
	}
	return 0;
}
