#include <cmath>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <map>
using namespace std;
bool fail=false;
int calculate(float marks[5]){
	sort(marks,marks+3);
	float ans=0.00;
	ans+=(((marks[1]+marks[2])*45)/40) + (marks[3]/2);
	
	if(marks[4] < 51.00)
		ans+=5.00;
	else if(marks[4] < 61.00)
		ans+=4.00;
	else if(marks[4] < 71.00)
		ans+=3.00;
	else if(marks[4] < 81.00)
		ans+=2.00;
	else if(marks[4] < 91.00)
		ans+=1.00;
	if(ans>=91.00)
		return 10;
	else if(ans>=81.00)
		return 9;
	else if(ans>=71.00)
		return 8;
	else if(ans>=61)
		return 7;
	if(ans>50.00)
		return 6;
	else if(ans==50)
		return 5;
	else{
		fail=true;
		return 0;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		fail=false;
		int credits[6];
		float res=0.00;
		for(int i=0;i<6;i++)
			cin >> credits[i];
		float total=0.00;
		for(int i=0;i<6;i++)
			total+=credits[i];
		for(int i=0;i<6;i++){
				float marks[5];
				for(int j=0;j<5;j++){
					string s;
					cin >> s;
					if(s[0]=='a')
						marks[j]=0;
					else
						marks[j]=atof(s.c_str());
				}
				res+=calculate(marks)*credits[i];
		}
		if(fail)
			printf("FAILED, %.2f\n",res/total);
		else
			printf("PASSED, %.2f\n",res/total);
	}
	return 0;
}
