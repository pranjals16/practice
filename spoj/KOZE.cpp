#include<iostream>
#include<stack>
#include<cstdlib>
#include<string>
#include<cstdio>
using namespace std;
#define MAX 251
char field[MAX][MAX];
int k,v,gk,gv;
int n,m;
void dfs(int i, int j){
	if(field[i][j] == 'k')
		k++;
	else if(field[i][j]=='v')
		v++;
	field[i][j]='#';
	if(i+1<n && field[i+1][j]!='#') dfs(i+1,j);
	if(i-1>=0 && field[i-1][j]!='#') dfs(i-1,j);
	if(j+1<n && field[i][j+1]!='#') dfs(i,j+1);
	if(j-1>=0 && field[i][j-1]!='#') dfs(i,j-1);
}

int main(){
	cin >>  n >> m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			char c;
			cin >> c;
			field[i][j]=c;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(field[i][j]!='#')
				dfs(i,j);
				if(k>v)
					gk+=k;
				else
					gv+=v;
				k=v=0;
		}
	}
	cout << gk << " " << gv << endl;
	return 0;
}
