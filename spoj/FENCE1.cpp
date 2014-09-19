#include <map>
#include <set>
#include <cmath>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){
	float t;
	cin >> t;
	while(t){
		printf("%.2f\n",(t*t)/(2*M_PI));
		cin >> t;
	}
	return 0;
}
