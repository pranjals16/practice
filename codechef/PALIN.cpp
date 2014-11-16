#include<iostream>
#include<stack>
#include<cstdlib>
using namespace std;
bool check9(string s){
	int n=s.size();
	for(int i=0;i<n;i++){
		if(s[i]!='9')
			return false;
	}
	return true;
}
bool isPal(string s){
	int j=s.size()-1;
	int i=0;
	while(i<=j){
		if(s[i]!=s[j])
			return false;
		i++;
		j--;
	}
	return true;
}
string nextpal(string s){
	string res="";
	int n=s.size();
	bool leftsmaller=false;
	if(check9(s)){
		res+='1';
		for(int i=1;i<=n-1;i++)
			res+='0';
		res+='1';
	}
	else{
		int mid=n/2;
		int i=mid-1;
		int j=(n%2)?mid+1:mid;
		while(i>=0 && s[i]==s[j])
			i--,j++;
		if(i<0 || s[i]<s[j])
			leftsmaller=true;
		while(i>=0){
			s[j]=s[i];
			j++;
			i--;
		}
		if(leftsmaller){
			int carry=1;
			i=mid-1;
			if(n%2==1){
				if(s[mid]=='9'){
					s[mid]-=9;
					carry=1;
				}
				else{
					s[mid]+=1;
					carry=0;
				}
				j=mid+1;
			}
			else
				j=mid;
			while(i>=0 && carry>0){
				if(s[i]=='9'){
					s[i]-=9;
					carry=1;
				}
				else{
					s[i]+=1;
					carry=0;
				}
				s[j++]=s[i--];
			}
		}
		res=s;
	}
	return res;

}
int main(){
	int n;
	cin >> n;
	while(n--){
		string s;
		cin >> s;
		string out=nextpal(s);
		cout << out <<endl;
	}
	return 0;
}
