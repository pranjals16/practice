#include <cmath>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

string days[7]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
string findDays(int date, int month, int year){
	int ans=0;
	ans+=(year-2012)*365;
	switch(month-1){
		case(0):
			break;
		case(1):{
			ans+=31;
			break;
		}
		case(2):{
			ans+=(31+28);
			break;
		}
		case(3):{
			ans+=(31+28+31);
			break;
		}
		case(4):{
			ans+=(31+28+31+30);
			break;
		}
		case(5):{
			ans+=(31+28+31+30+31);
			break;
		}
		case(6):{
			ans+=(31+28+31+30+31+30);
			break;
		}
		case(7):{
			ans+=(31+28+31+30+31+30+31);
			break;
		}
		case(8):{
			ans+=(31+28+31+30+31+30+31+31);
			break;
		}
		case(9):{
			ans+=(31+28+31+30+31+30+31+31+30);
			break;
		}
		case(10):{
			ans+=(31+28+31+30+31+30+31+31+30+31);
			break;
		}
		case(11):{
			ans+=(31+28+31+30+31+30+31+31+30+31+30);
			break;
		}
		case(12):{
			ans+=(31+28+31+30+31+30+31+31+30+31+30+31);
			break;
		}
	}
	ans+=date;
	for(int i=2012;i<year;i++)
		if(i%4==0)
			ans++;
	if(year%4==0 && month>2)
		ans++;
	
	return days[ans%7];
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int date,month,year;
		cin >> date >> month >> year;
		cout << findDays(date,month,year) << endl;
	}
	return 0;
}
