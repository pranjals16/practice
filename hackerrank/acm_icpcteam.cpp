#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    int n, m, c, mac=0, r=0;
    string s;
    vector <string> v;
    cin>>n>>m;
    for(int i=0; i<n; i++) cin>>s, v.push_back(s);
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            c=0;
            for(int k=0; k<m; k++) {
                if(v[i][k]=='1' || v[j][k]=='1') c++;
            }
            if(c>mac) mac=c;            
        }
    }
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            c=0;
            for(int k=0; k<m; k++) {
                if(v[i][k]=='1' || v[j][k]=='1') c++;
            }
            if(c==mac) r++;         
        }
    }
    printf("%d\n%d\n", mac, r);
    return 0;
}
