#include<iostream>
#include<string>
#include<ctype.h>
#include<vector>
#include<algorithm>
using namespace std;
int fact(int n){
	if(n<=1)
		return 1;
	return n*fact(n-1);
}
int small(string s,char c,int idx){
	int n=s.size(),count=0;
	for(int i=idx;i<n;i++){
		if(s[i]<c)
			count++;
	}
	return count;
}
int find(string s){
	int n=s.size(),rank=1,count;
	int mul=fact(n);
	for(int i=0;i<n;i++){
		mul=mul/(n-i);
		count= small(s,s[i],i+1);
		rank+=count*mul;
	}
	return rank;
}
int main(){
	string s;
	cin >> s;
	cout << find(s) << endl;
	return 0;
}
