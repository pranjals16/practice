#include<iostream>
#include<cstdio>
#include<string>
#include<map>

using namespace std;
int arr[20][20];

void find(string s, int n){
	if(s=="right"){
		int i=0;
		while(i<n){
			for(int j=n-1;j>0;j--){
				if(arr[i][j]!=arr[i][j-1] && arr[i][j]!=0 && arr[i][j-1]!=0)
					continue;
				else if(arr[i][j]==arr[i][j-1] && arr[i][j]!=0){
					arr[i][j]=2*arr[i][j];
					arr[i][j-1]=0;
				}
				else if(arr[i][j-1]==0 && arr[i][j]!=0){
					int t=j-1;
					while(t>=0 && arr[i][t]!=arr[i][j])
						t--;
					if(t>=0 && arr[i][t]==arr[i][j]){
						arr[i][j]=2*arr[i][j];
						arr[i][t]=0;
					}
				}
				else if(arr[i][j]==0){
					bool check=true;
					for(int k=j-1;k>=0;k--){
						if(arr[i][k]!=0)
							check=false;
					}
					if(check)
						break;
					for(int k=j;k>0;k--){
						arr[i][k]=arr[i][k-1];
					}
					arr[i][0]=0;
					j+=1;
				}
			}
			i++;
		}
	}
	else if(s=="up"){
		int j=0;
		while(j<n){
			for(int i=0;i<n-1;i++){
				if(arr[i][j]!=arr[i+1][j] && arr[i][j]!=0 && arr[i+1][j]!=0)
					continue;
				else if(arr[i][j]==arr[i+1][j] && arr[i][j]!=0){
					arr[i][j]=2*arr[i][j];
					arr[i+1][j]=0;
				}
				else if(arr[i+1][j]==0 && arr[i][j]!=0){
					int t=i+1;
					while(t<n && arr[t][j]!=arr[i][j])
						t++;
					if(t<n && arr[t][j]==arr[i][j]){
						arr[i][j]=2*arr[i][j];
						arr[t][j]=0;
					}
				}
				else if(arr[i][j]==0){
					bool check=true;
					for(int k=i+1;k<n;k++){
						if(arr[k][j]!=0)
							check=false;
					}
					if(check)
						break;
					for(int k=i;k<n-1;k++){
						arr[k][j]=arr[k+1][j];
					}
					arr[n-1][j]=0;
					i-=1;
				}
			}
			j++;
		}
	}
	else if(s=="down"){
		int j=0;
		while(j<n){
			for(int i=n-1;i>0;i--){
				if(arr[i][j]!=arr[i-1][j] && arr[i][j]!=0 && arr[i-1][j]!=0)
					continue;
				else if(arr[i][j]==arr[i-1][j] && arr[i][j]!=0){
					arr[i][j]=2*arr[i][j];
					arr[i-1][j]=0;
				}
				else if(arr[i-1][j]==0 && arr[i][j]!=0){
					int t=i-1;
					while(t>=0 && arr[t][j]!=arr[i][j])
						t--;
					if(t>=0 && arr[t][j]==arr[i][j]){
						arr[i][j]=2*arr[i][j];
						arr[t][j]=0;
					}
				}
				else if(arr[i][j]==0){
					bool check=true;
					for(int k=i-1;k>=0;k--){
						if(arr[k][j]!=0)
							check=false;
					}
					if(check)
						break;
					for(int k=i;k>0;k--){
						arr[k][j]=arr[k-1][j];
					}
					arr[0][j]=0;
					i+=1;
				}
			}
			j++;
		}
	}
	else if(s=="left"){
		int i=0;
		while(i<n){
			for(int j=0;j<n-1;j++){
				if(arr[i][j]!=arr[i][j+1] && arr[i][j]!=0 && arr[i][j+1]!=0)
					continue;
				else if(arr[i][j]==arr[i][j+1] && arr[i][j]!=0){
					arr[i][j]=2*arr[i][j];
					arr[i][j+1]=0;
				}
				else if(arr[i][j+1]==0 && arr[i][j]!=0){
					int t=j+1;
					while(t<n && arr[i][t]!=arr[i][j])
						t++;
					if(t<n && arr[i][t]==arr[i][j]){
						arr[i][j]=2*arr[i][j];
						arr[i][t]=0;
					}
				}
				else if(arr[i][j]==0){
					bool check=true;
					for(int k=j+1;k<n;k++){
						if(arr[i][k]!=0)
							check=false;
					}
					if(check)
						break;
					for(int k=j;k<n-1;k++){
						arr[i][k]=arr[i][k+1];
					}
					arr[i][n-1]=0;
					j-=1;
				}
			}
			i++;
		}
	}
}

int main(){
	int t,n,iter=1;
	cin >> t;
	
	while(t--){
		cin >> n;
		string s;
		cin >> s;
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin >> arr[i][j];
		find(s,n);
		cout << "Case #" << iter++ << ": \n";
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++)
				cout << arr[i][j] << "  ";
			cout << endl;
		}
	}
	return 0;
}
