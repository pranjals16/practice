#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main(){
	int t,x1,x2,v1,v2;
	cin >> t;
	while(t--){
		cin >> x1 >> x2 >> v1 >> v2;
		if(x2>x1){
			if((v1-v2)<=0){
				cout << "not possible\n";
				continue;
			}
			else{
				int dist=abs(x1-x2);
				float time=float(dist)/float(v1-v2);
				//cout << time << endl;
				int ans=x1+(v1*time);
				cout << "(" << ans << ",0)" << endl;
			}
		}
		else if(x2==x1){
			cout << "(" << x2 << ",0)" << endl;
		}
		else{
			if((v2-v1)<=0){
				cout << "not possible\n";
				continue;
			}
			else{
				int dist=abs(x1-x2);
				float time=float(dist)/float(v2-v1);
				//cout << time << endl;
				int ans=x1+(v1*time);
				cout << "(" << ans << ",0)" << endl;
			}
		}
	}
	return 0;
}
