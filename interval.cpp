#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

struct Interval{
	int start;
	int end;
};
bool compareInterval(Interval i1, Interval i2)
{  return (i1.start < i2.start)? true: false; }
void mergeInterval(vector<Interval> &intervals)
{
	if(intervals.size()==0) return;
	stack<Interval> s;
	sort(intervals.begin(),intervals.end(),compareInterval);
	s.push(intervals[0]);
	for(int i=1;i<intervals.size();i++){
		Interval top=s.top();
		if(top.end<intervals[i].start)
			s.push(intervals[i]);
		else if(top.end<intervals[i].end){
			top.end=intervals[i].end;
			s.pop();
			s.push(top);
		}
	}
	while(!s.empty()){
		Interval t=s.top();
		cout << "["<<t.start<<","<<t.end<<"]"<<" ";
		s.pop();
	}
	return;
}
 
int main()
{
    Interval intvl[]={ {1,3},{7,9},{4,6},{10,13} };
    vector<Interval> intervals(intvl,intvl+4);
    mergeInterval(intervals);
}
