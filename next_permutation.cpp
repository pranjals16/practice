#include<iostream>
#include<string>
#include<ctype.h>
#include<vector>
#include<algorithm>
using namespace std;
void nextPermutation(vector<int> &num) {
        int n=num.size();
        if(n<=1) return;
        // find first character's index
        int index=-1;
        for(int i=1;i<n;i++){
            if(num[i-1]<num[i])
                index=i-1;
        }
        if(index==-1){
            sort(num.begin(),num.end());
            return;
        }
        // find second character's index
        int temp=num[index+1],index2=index+1;
        for(int i=index+1;i<n;i++){
            if(num[i]>num[index] && num[i]<=temp){
                temp=num[i];
                index2=i;
            }
        }
        //swap both
        temp=num[index2];
        num[index2]=num[index];
        num[index]=temp;
        cout << num[0] << num[1] << num[2] << endl;
        sort(num.begin()+index+1,num.end());
        return;
        
    }
int main(){
	vector<int> num;
	num.push_back(1);
	num.push_back(3);
	num.push_back(2);
	nextPermutation(num);
	for(int i=0;i<num.size();i++)
		cout << num[i] << " ";
	cout << endl;
	return 0;
}
