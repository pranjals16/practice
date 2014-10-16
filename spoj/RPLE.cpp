#include<iostream>
#include<set>
#include<bitset>
#include<cstdio>
using namespace std;
int main(){
	int t,iter=1,p,q;
	cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b;
		set<int> spy,cit;
		bool flag=true;
		while(b--){
			cin >> p >> q;
			spy.insert(p);
			cit.insert(q);
		}
		for(int i=0;i<a;i++){
			if(spy.count(i)>0 && cit.count(i)>0){
				flag=false;
				break;
			}
		}
		if(flag)
			printf("Scenario #%d: spying\n",iter++);
		else
			printf("Scenario #%d: spied\n",iter++);
	}
	return 0;
}
