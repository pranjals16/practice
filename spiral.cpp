#include <iostream>
#include <deque>
 
using namespace std;
#define R 3
#define C 6
void spiral(int m, int n, int a[R][C])
{
	int r=0,c=0;
	while(r<m && c<n){
		/* first row*/
		for(int i=c;i<n;i++){
			cout << a[r][i] << " ";
		}
		r++;
		/* last column*/
		for(int i=r;i<m;i++){
			cout << a[i][n-1] << " ";
		}
		n--;
		/*last row*/
		if(r<m){
			for(int i=n-1;i>=c;i--){
				cout << a[m-1][i] << " ";
			}
			m--;
		}
		/*first column*/
		if(c<n){
			for(int i=m-1;i>=r;i--){
				cout << a[i][c] << " ";
			}
			c++;
		}
	}
	cout << "\n";
}
 
int main()
{
	int a[R][C] = { {1,  2,  3,  4,  5,  6},
			{7,  8,  9,  10, 11, 12},
			{13, 14, 15, 16, 17, 18}
		      };
	spiral(R, C, a);
	return 0;
}
