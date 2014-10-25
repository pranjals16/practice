#include <iostream>
#include <stack>
#include <string>
#include <cstring>
using namespace std;


 
int main()
{
	char s[] = "i like this program very much";
	int n=strlen(s);
	for(int i=0;i<n;i++){
		stack<char> st;
		while(s[i]!=32 && i<n)
			st.push(s[i++]);
		while(!st.empty()){
			cout << st.top();
			st.pop();
		}
		cout << " ";
	}
	cout << endl;
	return 0;
}
