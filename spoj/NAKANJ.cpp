#include<stdio.h>
#include<iostream>
#include<map>
#include<queue>
#include<vector>
using namespace std;
int bfs(int st_x, int st_y, int ed_x, int ed_y){
	queue<pair<pair<int,int>,int> > q;
	q.push(make_pair(make_pair(st_x,st_y),0));
	int i,j,d;
	while(!q.empty()){
		i=q.front().first.first;
		j=q.front().first.second;
		d=q.front().second;
		q.pop();
		if(i<0 || i>7 || j<0 || j>7)
			continue;
		if(i==ed_x && j==ed_y)
			return d;
		q.push(make_pair(make_pair(i+1,j+2),d+1));
		q.push(make_pair(make_pair(i+2,j+1),d+1));
		q.push(make_pair(make_pair(i+2,j-1),d+1));
		q.push(make_pair(make_pair(i+1,j-2),d+1));
		q.push(make_pair(make_pair(i-1,j-2),d+1));
		q.push(make_pair(make_pair(i-2,j-1),d+1));
		q.push(make_pair(make_pair(i-2,j+1),d+1));
		q.push(make_pair(make_pair(i-1,j+2),d+1));
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		string x,y;
		cin >> x >> y;
		int st_x=x[0]-'a';
		int st_y=x[1]-'1';
		int ed_x=y[0]-'a';
		int ed_y=y[1]-'1';
		cout << bfs(st_x,st_y,ed_x,ed_y) << endl;
		//cout << st_x << " "<<st_y<<" "<<ed_x<<" "<<ed_y<<endl;
	}
	return 0;
}
