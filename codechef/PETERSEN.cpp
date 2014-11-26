#include<iostream>
#include<stack>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<climits>
using namespace std;
int G[10][10];
void creategraph(){
	for(int i=0;i<5;i++){
		G[i][i+1]=1;
		G[i][(i+4)%5]=1;
		G[i][i+5]=1;
	}
	for(int i=5;i<10;i++){
		G[i][i-5]=1;
		G[i][((i+2)%5)+5]=1;
		G[i][((i+3)%5)+5]=1;
	}
}
bool dfs(string s,int index){
	stack<int> st;
	st.push(index);
	int next=0;
	while(!st.empty()){
		index=st.top();
		st.pop();
		bool flag=false;
		for(int i=0;i<10;i++){
			if(G[index][i]){
				if(((s[next]-'A')==i) || (s[next]-'A')==(i%5)){
					cout << s[next] << i<< endl;
					flag=true;
					st.push(i);
					next++;
				}
			}
		}
		if(!flag && st.empty())
			return false;
		if(next==s.size())
			return true;
	}
}
int main(){
	int t;
	cin >> t;
	creategraph();
	while(t--){
		string s;
		cin >> s;
		for(int i=0;i<10;i++){
			if((s[0]-'A')==i || (s[0]-'A')==(i%5)){
				if(dfs(s,i))
					cout << "found\n";
			}
		}
		//cout << "not found\n";
	}
	return 0;
}
