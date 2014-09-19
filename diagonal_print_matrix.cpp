#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
#define ROW 5
#define COL 4
void printdiagonal(int matrix[ROW][COL],int m,int n)
{
	cout << "hello";
	int c=0,r=m-1;
	vector<vector<int> > res(m+n-1,vector<int>(m+n-1,0));
	while(1){
		/*Top*/
		for(int i=0;i<=r;i++){
			res[i][c]=(matrix[i][c]);
		}
		c++;
		for(int i=r;i<=r;i++){
			res[i][c]=(matrix[i][c]);
		}
		r--;
		break;
	}
	for (int i=0; i< m+n-1; i++)
    {
        for (int j=0; j<m+n-1; j++)
            cout <<"     "<<res[i][j];
        cout << "\n";
    }
}
void printMatrix(int matrix[ROW][COL])
{
    for (int i=0; i< ROW; i++)
    {
        for (int j=0; j<COL; j++)
            cout <<"     "<<matrix[i][j];
        cout << "\n";
    }
}
int main()
{
	int M[ROW][COL] = {{1, 2, 3, 4},
		             {5, 6, 7, 8},
		             {9, 10, 11, 12},
		             {13, 14, 15, 16},
		             {17, 18, 19, 20},
		            };
	cout<< "Given matrix is \n";
	printMatrix(M);
	cout<< "Diagonal printing of matrix is \n";
	printdiagonal(M,ROW,COL);
	return 0;
}
