#include<iostream>
#include<cstdio>
#include<string>
#include<map>

using namespace std;

int main(){
	int t,iter=1;
	double C,F,X,R,ntime,otime;
	cin >> t;
	while(t--){
		cin >> C >> F >> X;
		R=2.0;
		otime=X/R;
		ntime=0.0;
		while(1){
			ntime+=C/R;
			R+=F;
			ntime+=X/R;
			if(ntime>=otime) break;
			otime=ntime;
			ntime-=X/R;
		}
		printf("Case #%d: %.7lf\n", iter++, otime);
	}
	return 0;
}
