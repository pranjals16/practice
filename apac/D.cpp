#include<iostream>
#include<cstdio>
#include<string>
#include<map>
#include<vector>
using namespace std;
int n;
char arr[9][9];
int count=0;

bool isSafe(int i, int j){
	if(i>=1 && i<=8 && j>=1 && j<=8 && arr[i][j]!='-')
		return true;
	return false;
}

void check(int i, int j){
	
	if(arr[i][j]=='K'){
		int dx[]={-1,0,1,-1,1,-1,0,1};
		int dy[]={-1,-1,-1,0,0,1,1,1};
		for(int l=0;l<8;l++){
			if(isSafe(i+dx[l],j+dy[l]))
				count++;
		}
		return;
	}
	else if(arr[i][j]=='N'){
		int dx[]={-2,-1,1,2,2,1,-1,-2};
		int dy[]={1,2,2,1,-1,-2,-2,-1};
		for(int l=0;l<8;l++){
			if(isSafe(i+dx[l],j+dy[l]))
				count++;
		}
		return;
	}
	else if(arr[i][j]=='R'){
		int dx=i,dy=j;
		dx=i+1;
		while(dx<=8 && arr[dx][dy]=='-')
			dx++;
		if(dx<=8 && arr[dx][dy]!='-' && dx!=i)
			count++;
		dx=i;
		dy=j+1;
		while(dy<=8 && arr[dx][dy]=='-')
			dy++;
		if(dy<=8 && arr[dx][dy]!='-' && dy!=j)
			count++;
		dy=j;
		dx=i-1;
		while(dx>=1 && arr[dx][dy]=='-')
			dx--;
		if(dx>=1 && arr[dx][dy]!='-'&& dx!=i)
			count++;
		dx=i;
		dy=j-1;
		while(dy>=1 && arr[dx][dy]=='-')
			dy--;
		if(dy>=1 && arr[dx][dy]!='-' && dy!=j){
			count++;
		}
		dy=j;
		return;
	}
	else if(arr[i][j]=='B'){
		int dx=i,dy=j;
		dx=i+1;dy=j+1;
		while(dx<=8 && dy<=8 && arr[dx][dy]=='-')
			dx++,dy++;
		if(dx<=8 && dy<=8 && arr[dx][dy]!='-' && dx!=i && dy!=j)
			count++;
		dx=i-1,dy=j+1;
		while(dx>=1 && dy<=8 && arr[dx][dy]=='-')
			dx--,dy++;
		if(dx>=1 && dy<=8 && arr[dx][dy]!='-' && dx!=i && dy!=j)
			count++;
		dx=i+1,dy=j-1;
		while(dx<=8 && dy>=1 && arr[dx][dy]=='-')
			dx++,dy--;
		if(dx<=8 && dy>=1 && arr[dx][dy]!='-' && dx!=i && dy!=j)
			count++;
		dx=i+1,dy=j-1;
		while(dx>=1 && dy>=1 && arr[dx][dy]=='-')
			dx--,dy--;
		if(dx>=1 && dy>=1 && arr[dx][dy]!='-' && dx!=i && dy!=j)
			count++;
		dx=i,dy=j;
		return;
	}
	else if(arr[i][j]=='Q'){
		int dx=i,dy=j;
		dx=i+1;
		while(dx<=8 && arr[dx][dy]=='-')
			dx++;
		if(dx<=8 && arr[dx][dy]!='-' && dx!=i)
			count++;
		dx=i;
		dy=j+1;
		while(dy<=8 && arr[dx][dy]=='-')
			dy++;
		if(dy<=8 && arr[dx][dy]!='-' && dy!=j)
			count++;
		dy=j;
		dx=i-1;
		while(dx>=1 && arr[dx][dy]=='-')
			dx--;
		if(dx>=1 && arr[dx][dy]!='-'&& dx!=i)
			count++;
		dx=i;
		dy=j-1;
		while(dy>=1 && arr[dx][dy]=='-')
			dy--;
		if(dy>=1 && arr[dx][dy]!='-' && dy!=j){
			count++;
		}
		dy=j;
		
		dx=i+1;dy=j+1;
		while(dx<=8 && dy<=8 && arr[dx][dy]=='-')
			dx++,dy++;
		if(dx<=8 && dy<=8 && arr[dx][dy]!='-' && dx!=i && dy!=j)
			count++;
		dx=i-1,dy=j+1;
		while(dx>=1 && dy<=8 && arr[dx][dy]=='-')
			dx--,dy++;
		if(dx>=1 && dy<=8 && arr[dx][dy]!='-' && dx!=i && dy!=j)
			count++;
		dx=i+1,dy=j-1;
		while(dx<=8 && dy>=1 && arr[dx][dy]=='-')
			dx++,dy--;
		if(dx<=8 && dy>=1 && arr[dx][dy]!='-' && dx!=i && dy!=j)
			count++;
		dx=i+1,dy=j-1;
		while(dx>=1 && dy>=1 && arr[dx][dy]=='-')
			dx--,dy--;
		if(dx>=1 && dy>=1 && arr[dx][dy]!='-' && dx!=i && dy!=j)
			count++;
		dx=i,dy=j;
		return;
	}
	else if(arr[i][j]=='P'){
		int dx=i,dy=j;
		dx=i+1;dy=j-1;
		if(dx<=8 && dy>=0 && arr[dx][dy]!='-')
			count++;
		dx=i+1;dy=j+1;
		if(dx<=8 && dy<=8 && arr[dx][dy]!='-')
			count++;
	}
	
}
int main(){
	int t,iter=1;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=1;i<9;i++)
			for(int j=1;j<9;j++)
				arr[i][j]='-';
		for(int i=0;i<n;i++)
		{
			string s;
			cin >> s;
			arr[s[1]-'0']['A'+8-s[0]]=s[3];
		}
		/*for(int i=1;i<9;i++){
			for(int j=1;j<9;j++)
				cout << arr[i][j] << " ";
			cout << endl;
		}*/
		for(int i=1;i<9;i++){
			for(int j=1;j<9;j++){
				if(arr[i][j]!='-')
					check(i,j);
			}
		}
		
		printf("Case #%d: ", iter++);
		cout << count;
		cout << endl;
		count=0;
	}
	return 0;
}
