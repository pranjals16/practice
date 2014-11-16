#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>
using namespace std;
#define NO_OF_CHARS 256
int min(int a, int b);
 
int longestUniqueSubsttr(string str)
{
    int n = str.size();
    int cur_len = 1;  // To store the lenght of current substring
    int max_len = 1;  // To store the result
    int prev_index;  // To store the previous index
    int i;
    int *visited = (int *)malloc(sizeof(int)*NO_OF_CHARS);
 
    for (i = 0; i < NO_OF_CHARS;  i++)
        visited[i] = -1;
 
    visited[str[0]] = 0;
 
    for (i = 1; i < n; i++)
    {
        prev_index =  visited[str[i]];
 
        if (prev_index == -1 || i - cur_len > prev_index)
            cur_len++;
 
        else
        {
            if (cur_len > max_len)
                max_len = cur_len;
 
            cur_len = i - prev_index;
        }
 
        visited[str[i]] = i; // update the index of current character
    }
 
    if (cur_len > max_len)
        max_len = cur_len;
    free(visited); // free memory allocated for visited
    return max_len;
}
 
int min(int a, int b)
{
    return (a>b)?b:a;
}
int main(){
	int n;
	cin >> n;
	while(n--){
		string s;
		cin >> s;
		cout << longestUniqueSubsttr(s) << endl;
	}
	return 0;
}
