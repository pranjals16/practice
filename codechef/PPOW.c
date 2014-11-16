#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>

int sumdigit(int a, int b);

int main(void) {
	long int t,iter=1;
	scanf("%ld",&t);
	while(t--){
		int a,b;
		scanf("%d%d",&a,&b);
		printf("Case %ld: %d\n",iter++, sumdigit(a, b));
	}
	return 0;
}

int sumdigit(int a, int b) {
    // numlen = number of digit in a^b
    // pcount = power of 'a' after ith iteration
    // dcount = number of digit in a^(pcount)

    int numlen = (int) (b * log10(a)) + 1;
    char *arr = calloc(numlen, sizeof *arr);
    int pcount = 0;
    int dcount = 1;
    arr[numlen - 1] = 1;
    int i, sum, carry;

    while(pcount < b) {
        pcount += 1;

        sum = 0; 
        carry = 0;

        for(i = numlen - 1; i >= numlen - dcount; --i) {
            sum = arr[i] * a + carry;
            carry = sum / 10;
            arr[i] = sum % 10;
        }

        while(carry > 0) {
            dcount += 1;
            sum = arr[numlen - dcount] + carry;
            carry = sum / 10;
            arr[numlen - dcount] = sum % 10;
        } 
    }

    int result = 0;
    for(i = numlen - dcount; i < numlen; ++i)
        result += arr[i];

    free(arr);
    return result;
}
