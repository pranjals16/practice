#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<map>

using namespace std;

int main(){
	int n;
	string s,t;
	cin >> n >> s;
	while(n--){
		string tmp="";
		int i=0;
		cin >> t;
		int n1=s.size(),n2=t.size();
		while(i<n2){
			if(t[i]=='.'){
				tmp=tmp+t[i-1]+t[i-1];
				i+=2;
			}
			else if(t[i]=='+'){
				tmp=tmp+t[i-1]+t[i-1]+t[i-1]+t[i-1];
				i+=2;
			}
			else if( (t[i]>=97 && t[i]<=122) && (i<(n2-1) && !(t[i+1]>=97 && t[i+1]<=122)) )
				i+=1;
			else{
				tmp=tmp+t[i];
				i+=1;
			}
		}
		int count=0;
		for(int i=0;i<n1;i++){
			if((s.substr(i,tmp.size()).find(tmp))+1)
				count++;
		}
		cout << count << endl;
	}
	return 0;
}
