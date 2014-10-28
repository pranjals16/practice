#include<iostream>
using namespace std;
#define ROW 5
#define COL 5

int dx[]={0,1,1,1,0,-1,-1,-1};
int dy[]={1,1,0,-1,-1,-1,0,1};

bool isSafe(int x ,int y){
	if(x>=0 && x<ROW && y>=0 && y<COL)
		return true;
	else
		return false;
}
void dfs(int M[][COL], int i, int j, bool visited[][COL]){
	visited[i][j]=true;
	for(int k=0;k<8;k++){
		if(isSafe(i+dx[k],j+dy[k]) && !visited[i+dx[k]][j+dy[k]] && M[i+dx[k]][j+dy[k]])
			dfs(M,i+dx[k],j+dy[k],visited);
	}
}

int countIslands(int M[][COL]){
	bool visited[ROW][COL]={false};
	int count=0;
	for(int i=0;i<ROW;i++){
		for(int j=0;j<COL;j++){
			if(!visited[i][j] && M[i][j]){
				dfs(M,i,j,visited);
				count++;
			}
		}
	}
	return count;
}

int main(){
	int M[][COL]= {	{1, 1, 0, 0, 0},
					{0, 1, 0, 0, 1},
					{1, 0, 0, 1, 1},
					{0, 0, 0, 0, 0},
					{1, 0, 1, 0, 1}
	};

	cout << "Number of islands is: " << countIslands(M) << endl;

	return 0;
}
