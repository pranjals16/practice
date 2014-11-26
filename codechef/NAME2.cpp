 #include<iostream>
using namespace std;
bool subsequence(string a, string b){
	int j = 0;
	for(int i = 0; i < (int)a.length() && j < (int)b.length(); i++)
		if(a[i]==b[j]) 
			j++;
	return j == (int)b.length();
}
int main(){
	ios::sync_with_stdio(false);
	int t; cin>>t;
	string s1,s2;
	while(t--){
		cin>>s1>>s2;
		if(s1.length() < s2.length()){
			if(subsequence(s2,s1))
				cout<<"YES"<<endl;
			else 
				cout<<"NO"<<endl;
		}
		else{
			if(subsequence(s1,s2))
				cout<<"YES"<<endl;
			else 
				cout<<"NO"<<endl;
		}
	}
	return 0;
}
