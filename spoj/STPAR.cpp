#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main(){
	int n;
	while(1){
		cin >> n;
		bool visited[1001]={false};
		if(n==0)
			break;
		int arr[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];
		stack<int> s;
		int start=1;
		for(int i=0;i<n;i++){
			if(start==arr[i]){
				visited[start]=true;
				start++;
			}
			else
				s.push(arr[i]);
		}
		while(!s.empty()){
			visited[s.top()]=true;
			s.pop();
		}
		bool flag=true;
		for(int i=0;i<n;i++){
			if(visited[arr[i]])
				continue;
			else{
				flag=false;
				break;
			}
		}
		if(flag)
			cout << "yes\n";
		else
			cout << "no\n";
	}
	return 0;
}
