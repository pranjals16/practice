#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
 
using namespace std;
 
bool isInterleaved(char *a, char *b, char *c)
{
	int m=strlen(a);
	int n=strlen(b);
	bool IL[m+1][n+1];
	memset(IL,0,sizeof(IL));
	if((m+n)!=strlen(c))
		return false;
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			if (i==0 && j==0)
				IL[i][j]=true;
			else if(i==0 && b[j-1]==c[j-1])
				IL[i][j]=IL[i][j-1];
			else if(j==0 && a[i-1]==c[i-1])
				IL[i][j]=IL[i-1][j];
			else if(a[i-1]==c[i+j-1] && b[j-1]!=c[i+j-1])
				IL[i][j]=IL[i-1][j];
			else if(a[i-1]!=c[i+j-1] && b[j-1]==c[i+j-1])
				IL[i][j]=IL[i][j-1];
			else if(a[i-1]==c[i+j-1] && b[j-1]==c[i+j-1])
				IL[i][j]=(IL[i-1][j] || IL[i][j-1]);
			
		}
	}
	return IL[m][n];
}
void test(char *a, char *b, char *c){
	if(isInterleaved(a,b,c))
		cout << c <<" is interleaved of "<<a<<" and "<<b<<endl;
	else
		cout << c <<" is not interleaved of "<<a<<" and "<<b<<endl;
}
int main()
{
    test("XXY", "XXZ", "XXZXXXY");
    test("XY" ,"WZ" ,"WZXY");
    test ("XY", "X", "XXY");
    test ("YX", "X", "XXY");
    test ("XXY", "XXZ", "XXXXZY");
    return 0;
}
