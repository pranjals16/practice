#include <iostream>
#include <deque>
#include <string>
#include <cstring>
#define MAX 256
using namespace std;

int countDec(char *digits, int n)
{
	int count[n+1];
	count[0]=1;
	count[1]=1;
	for(int i=2;i<=n;i++){
		count[i]=0;
		if(digits[i-1]>'0')
			count[i]=count[i-1];
		if(digits[i-2]<'2'|| (digits[i-2]=='2' && digits[i-1]<'7'))
			count[i]+=count[i-2];	
	}
	return count[n];
}
 
int main()
{
    char digits[]="1234";	
    int n=strlen(digits);
    cout <<"Count is: "<<countDec(digits,n)<<endl;
    return 0;
}
