#include <iostream>
#include<vector>
#include<stack>
#include<algorithm>

using namespace std;
typedef struct pal{
	char a;
	int cnt;
} pal;
bool compare(pal x1,pal x2){
	if(x1.cnt > x2.cnt)
		return true;
	else if(x1.cnt < x2.cnt)
		return false;
	else
		return (x1.a>x2.a);
}
int main() {
	string s;
	cin >> s;
	int n=s.size();
	pal count[26];
	for(int i=0;i<26;i++){
		count[i].cnt=0;
		count[i].a='\0';
	}
	for(int i=0;i<n;i++){
		(count[s[i]-'a'].cnt)++;
		(count[s[i]-'a'].a)=s[i];
	}
	sort(count,count+26,compare);
	int index=0;
	for(int i=0;i<26;i++){
		if(count[i].cnt!=0)
			index++;
		else
			break;
	}
	string res="";
	for(int i=index-1;i>=0;i--){
		if(count[i].cnt==1){
			res=res+count[i].a;
			count[i].cnt--;
		}
		else{
			while(count[i].cnt!=0){
				res=res+count[i].a;
				res=count[i].a+res;
				count[i].cnt-=2;
			}
		}
	}
	cout << res << endl;
	//for(int i=0;i<26;i++)
	//	cout << "[ " << count[i].a << "," << count[i].cnt << " ]" << endl;
		
	
}
