#include<iostream>
#include<string>
#include<cstdio>
#include<map>
#include<set>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		map<string,int> table;
		map<string,int>::iterator it;
		char str[40];
		scanf("%d\n",&n);
		while(n--){
			gets(str);
			table[string(str)]++;
		}
		for(it=table.begin();it!=table.end();it++)
			printf("%s %d\n",it->first.c_str(),it->second);
		printf("\n");
	}
	return 0;
}
