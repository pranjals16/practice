#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>
using namespace std;
#define mp make_pair
int countDec(string s, int n){
	int count[n+1];
	count[0]=1;
	count[1]=1;
	for(int i=2;i<=n;i++){
		count[i]=0;
		if(s[i-1]>'0')
			count[i]=count[i-1];
		if(s[i-2]<'2'|| s[i-2]=='2' && s[i-1]<'7')
			count[i]+=count[i-2];
	}
	return count[n];	
}

int main(){
	string s;
	cin >> s;
	int n;
	while(s[0]!='0'){
		n=s.size();
		cout << countDec(s,n) << endl;
		cin >> s;
	}
	return 0;
}
