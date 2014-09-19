#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
int Partition(int ar[], int beg, int end)          //Function to Find Pivot Point
{
	int p=beg, pivot=a[beg], loc;

	for(loc=beg+1;loc<=end;loc++)
	{
		if(pivot>ar[loc])
		{
			ar[p]=ar[loc];
			ar[loc]=ar[p+1];
			ar[p+1]=pivot;

			p=p+1;
		}
	}
	return p;
}
void qsort(int ar[], int beg, int end){
	if(beg<end)
	{
		int p=Partition(ar,beg,end);                       

		qsort(ar,beg,p-1);                             
		qsort(ar,p+1,end);			              
	}
}
void quickSort(vector <int>  ar, int ar_size) {
	qsort(ar,0,ar_size);
}
int main(void) {
   vector <int>  _ar;
   int _ar_size;
cin >> _ar_size;
for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
   int _ar_tmp;
   cin >> _ar_tmp;
   _ar.push_back(_ar_tmp); 
}

quickSort(_ar, _ar_size);
   for(int i=0;i<_ar_size;i++)
   	cout << _ar[i] << " ";
   cout << endl;
   return 0;
}

