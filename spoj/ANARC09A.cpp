#include<iostream>
#include<stack>
#include<cstdlib>
#include<string>
using namespace std;
int main(){
	string s;
	cin >> s;
	int iter=0,x=0;
	while(s[0]!='-'){
		x=0;
		int n=s.size();
		int cnt=0;
		for(int i=0;i<n;i++){
			if(s[i]=='{')
				cnt++;
			else{
				cnt--;
				if(cnt<0){
					cnt=1;
					x++;
				}
			}
		}
		int ans=x+cnt/2;
		cout << iter+1 << ". " << ans << endl;
		cin >> s;
		iter++;
	}
	return 0;
}
