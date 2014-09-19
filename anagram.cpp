#include <iostream>
#include <deque>
#include <string>
#include <cstring>
#define MAX 256
using namespace std;

bool compare(char a[], char b[]){
	for(int i=0;i<256;i++){
		if(a[i]!=b[i])
			return false;
	}
	return true;
}
void search(char *pat, char *txt)
{
	int m=strlen(pat);
	int n=strlen(txt);
	char countp[MAX]={0};
	char countt[MAX]={0};
	for(int i=0;i<m;i++){
		countp[pat[i]]++;
		countt[txt[i]]++;
	}
	for(int i=m;i<n;i++){
		if(compare(countp,countt))
			cout <<(i-m) <<endl;
		countt[txt[i]]++;
		countt[txt[i-m]]--;
	}
	if(compare(countp,countt))
		cout <<(n-m) <<endl;
}
 
int main()
{
    char txt[]="BACDGABCDA";	
    char pat[]="ABCD";
    search(pat,txt);
    return 0;
}
