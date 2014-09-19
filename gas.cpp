#include <iostream>
#include <deque>
 
using namespace std;
#define R 3
#define C 6
int check(int gas[],int cost[],int n)
{
	int start=0;
	int end=1;
	int sum=gas[0]-cost[0];
	while(end!=start || sum<0){
		while(sum<0 && start!=end){
			sum-=gas[start]-cost[start];
			start=(start+1)%n;
			if(start==0)
				return -1;
		}
		sum+=gas[end]-cost[end];
		end=(end+1)%n;
	}
	return start;
}
 
int main()
{
	int gas[]={6,3,7,2,1};
	int cost[]={7,2,3,5,2};
	int n=sizeof(gas)/sizeof(gas[0]);
	cout << check(gas,cost,n) <<"\n";
	return 0;
}
