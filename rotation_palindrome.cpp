#include <iostream>
#include <deque>
#include <string>
 
using namespace std;

bool isPalindrome(string s){
	int l=s.length()-1;
	int i=0;
	while(i<=l){
		if(s[i]==s[l]){
			i++;
			l--;
		}
		else
			return false;
	}
	return true;
}
bool check_rotation(string s)
{
	string l=s+s;
	int ssize=s.length()-1;
	int lsize=l.length()-1;
	int i=0;
	int flag=0;
	for(i=0;i<(lsize-ssize+1);i++){
		string temp=l.substr(i,ssize+1);
		if(isPalindrome(temp))
			flag=1;
	}
	if(flag==1)
		return true;
	else
		return false;
}
 
int main()
{
    cout << check_rotation("aaaad")<<endl;
    return 0;
}
