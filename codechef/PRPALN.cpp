#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int count=0;
/*bool find(string s, int st, int ed){
	for(int i=st;i<=ed;i++)
		cout << s[i];
	cout << count << endl;
	if(st>=ed)
		return true;
	if(s[st]==s[ed])
		return find(s,st+1,ed-1);
	else{
		count++;
		if(count>1)
			return false;
		else
			return find(s,st+1,ed) || find(s,st,ed-1);
	}	
}
*/
bool find(string s, int n){
	bool dp[n+1][n+1],j,i;
	memset(dp,false,sizeof(dp));
	for(int gap=1;gap<n;gap++){
		int l=0;
		int h=l+gap;
		for(;h<n;l++,h++){
			if(s[l]==s[h])
				dp[l][h]=dp[l+1][h-1];
			else
				dp[l][h]=1+min(dp[l+1][h],dp[l][h-1]);
		}
	}
	cout << dp[0][n-1] << endl;
	return dp[0][n-1]<1;
}
int main(){
	int n;
	cin >> n;
	while(n--){
		string s;
		cin >> s;
		int n=s.size();
		if(find(s,n))
			cout << "YES\n";
		else
			cout << "NO\n";
		count=0;
	}
	return 0;
}
