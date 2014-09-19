#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
 
using namespace std;
 
void filter(char *str)
{
	int state=1;
	int j=0;
	for(int i=0;str[i]!='\0';i++){
		if(state==1 && str[i]!='a' && str[i]!='b'){
			str[j++]=str[i];
			continue;
		}
		if(state==2 && str[i]!='c'){
			str[j]='a';
			j++;
			if(str[i]!='a' && str[i]!='b'){
				str[j++]=str[i];
			}
		}
		state=(str[i]=='a')?2:1;		
	}
	if(state==2)
		str[j++]='a';
	str[j]='\0';
}
int main()
{
    char str[]="ad";
    filter(str);
    cout << str <<endl;
    return 0;
}
