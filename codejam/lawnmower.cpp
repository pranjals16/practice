#include <cstdio>
#include<iostream>
using namespace std;
int arr[100][100],row,col;
void check(int *iter){
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				int x=arr[i][j];
				
				bool flag=true;
				for(int k=0;k<row;k++){
					if(arr[k][j]>x){
						flag=false;
						break;
					}
				}
				if(flag)
					continue;
				flag=true;
				for(int k=0;k<col;k++){
					if(arr[i][k]>x){
						flag=false;
						break;
					}
				}
				if(!flag){
					cout << "Case #" << (*iter)++ << ": NO\n";
					return;
				}
				
			}
		}
		cout << "Case #" << (*iter)++ << ": YES\n";
		return;

}
int main() {
	int t,iter=1;
	cin >> t;
	while(t--) {
		cin >> row >> col;
		for(int i=0;i<row;i++)
			for(int j=0;j<col;j++)
				cin >> arr[i][j];
		check(&iter);
	}
	return 0;
}
