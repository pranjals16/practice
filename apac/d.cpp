#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<vector<char> > V;
int N;
int T;

bool check(int i, int j) {
  if(i>=0 and i<=7 and j>=0 and j<=7)
    return true;
  return false;
}
int main() {
  scanf("%d", &T);
  for(int t=0;t<T;t++) {
    cout<<"Case #"<<t+1<<": ";
    // cout<<endl;
    cin>>N;
    V.clear();
    for(int i=0;i<8;i++) {
      vector<char> tmp;
      for(int j=0;j<8;j++)  {
	tmp.push_back('#');
      }
      V.push_back(tmp);
    }
    for(int i=0;i<N;i++) {
      string s;
      cin>>s;
      V[s[0]- 'A'][s[1] - '0'-1] = s[3];
    }
    // for(int i=0;i<8;i++) {
    //   for(int j=0;j<8;j++) 
    // 	cout<<V[i][j];
    //   cout<<endl;
    // }
    int c=0;
    for(int i=0;i<8;i++) {
      for(int j=0;j<8;j++) {
	int c_old = c;
	if(V[i][j] == 'K') {
	  if(check(i-1, j-1) and V[i-1][j-1]!='#') c++;
	  if(check(i+1, j-1) and V[i+1][j-1]!='#') c++;
	  if(check(i-1, j+1) and V[i-1][j+1]!='#') c++;
	  if(check(i+1, j+1) and V[i+1][j+1]!='#') c++;
	  if(check(i-1, j) and V[i-1][j]!='#') c++;
	  if(check(i, j-1) and V[i][j-1]!='#') c++;
	  if(check(i+1, j) and V[i+1][j]!='#') c++;
	  if(check(i, j+1) and V[i][j+1]!='#') c++;
	} else if (V[i][j] == 'Q') {
	  for(int p=1;check(i-p, j);p++) {
	    if(check(i-p, j) and V[i-p][j] !='#') {c++; break;}
	  }
	  for(int p=1;check(i+p, j);p++) {
	    if(check(i+p, j) and V[i+p][j] !='#') {c++; break;}
	  }
	  for(int p=1;check(i, j-p);p++) {
	    if(check(i, j-p) and V[i][j-p] !='#') {c++; break;}
	  }
	  for(int p=1;check(i, j+p);p++) {
	    if(check(i, j+p) and V[i][j+p] !='#') {c++; break;}
	  }
	  for(int p=1;check(i-p, j-p);p++) {
	    if(check(i-p, j-p) and V[i-p][j-p] !='#') {c++; break;}
	  }
	  for(int p=1;check(i+p, j+p);p++) {
	    if(check(i+p, j+p) and V[i+p][j+p] !='#') {c++; break;}
	  }
	  for(int p=1;check(i+p, j-p);p++) {
	    if(check(i+p, j-p) and V[i+p][j-p] !='#') {c++; break;}
	  }
	  for(int p=1;check(i-p, j+p);p++) {
	    if(check(i-p, j+p) and V[i-p][j+p] !='#') {c++; break;}
	  }
	}

	else if (V[i][j] == 'N'){
	  if(check(i-2, j-1) and V[i-2][j-1]!='#') c++;
	  if(check(i+2, j-1) and V[i+2][j-1]!='#') c++;
	  if(check(i-2, j+1) and V[i-2][j+1]!='#') c++;
	  if(check(i+2, j+1) and V[i+2][j+1]!='#') c++;
	  if(check(i-1, j-2) and V[i-1][j-2]!='#') c++;
	  if(check(i-1, j+2) and V[i-1][j+2]!='#') c++;
	  if(check(i+1, j-2) and V[i+1][j-2]!='#') c++;
	  if(check(i+1, j+2) and V[i+1][j+2]!='#') c++;
	}

	else if (V[i][j] == 'B'){
	  for(int p=1;check(i-p, j-p);p++) {
	    if(check(i-p, j-p) and V[i-p][j-p] !='#') {c++; break;}
	  }
	  for(int p=1;check(i+p, j+p);p++) {
	    if(check(i+p, j+p) and V[i+p][j+p] !='#') {c++; break;}
	  }
	  for(int p=1;check(i+p, j-p);p++) {
	    if(check(i+p, j-p) and V[i+p][j-p] !='#') {c++; break;}
	  }
	  for(int p=1;check(i-p, j+p);p++) {
	    if(check(i-p, j+p) and V[i-p][j+p] !='#') {c++; break;}
	  }
	}

	else if (V[i][j] == 'R'){
	  for(int p=1;check(i-p, j);p++) {
	    if(check(i-p, j) and V[i-p][j] !='#') {c++; break;}
	  }
	  for(int p=1;check(i+p, j);p++) {
	    if(check(i+p, j) and V[i+p][j] !='#') {c++; break;}
	  }
	  for(int p=1;check(i, j-p);p++) {
	    if(check(i, j-p) and V[i][j-p] !='#') {c++; break;}
	  }
	  for(int p=1;check(i, j+p);p++) {
	    if(check(i, j+p) and V[i][j+p] !='#') {c++; break;}
	  }
	}

	else if (V[i][j] == 'P'){
	  if(check(i+1,j-1) and V[i+1][j-1]!='#') c++;
	  if(check(i+1, j+1) and V[i+1][j+1]!='#') c++;
	}

	// if(c_old!=c) {
	//   cout<<c_old<<c<<V[i][j]<<endl;
	// }
      }
    }
    cout<<c<<endl;
  }
}
