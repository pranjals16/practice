#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	string s;
	cin >> s;
	int n=s.size();
	int count[26]={0},len=1,maxlen=1,l_index=0;
	count[s[0]-'A']++;
	for(int i=1;i<n;i++){
		if(count[s[i]-'A']==0){
			len+=1;
			count[s[i]-'A']++;
		}
		else{
			while(count[s[i]-'A']!=0){
				count[s[l_index]-'A']--;
				l_index++;
				len--;
			}
		}
		maxlen=max(maxlen,len);
	}
	cout << maxlen << endl;
	return 0;
}
