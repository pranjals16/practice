#include <iostream>
#include <string>
#include <vector>
#include <cstdio>

using namespace std;
bool dfs(vector<vector<char> > &board, string word, int i, int j,int row, int col, vector<vector<bool> > &visited,int index){
	if(index==word.size())
		return true;
	visited[i][j]=true;
	cout << i << " " << j << " " << board[i][j] << endl;
	if(i+1<row && !visited[i+1][j] && word[index]==board[i+1][j]) return dfs(board,word,i+1,j,row,col,visited,index+1);
	if(j+1<col && !visited[i][j+1] && word[index]==board[i][j+1]) return dfs(board,word,i,j+1,row,col,visited,index+1);
	if(i-1>=0 && !visited[i-1][j] && word[index]==board[i-1][j]) return dfs(board,word,i-1,j,row,col,visited,index+1);
	if(j-1>=0 && !visited[i][j-1] && word[index]==board[i][j-1]) return dfs(board,word,i,j-1,row,col,visited,index+1);
	return false;
}

int main()
{
	int row,col;
	string word;
	cin >> row >> col >> word;
	vector<vector<char> > board;
	board.resize(row);
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++){
			char temp;
			cin >> temp;
			board[i].push_back(temp);
		}
	
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(board[i][j]==word[0]){
				vector<vector<bool> > visited(row,vector<bool>(col,false));
				if(dfs(board,word,i,j,row,col,visited,1)){
					cout << "Found\n";
					return 0;
				}
			}
		}
	}
	cout << "Not Found\n";
	return 0;
}
 
