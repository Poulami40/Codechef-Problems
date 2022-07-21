/*Chef is ordering food online (instead of cooking) and the bill comes out to be Rs. XX. Chef can use one of the following two coupons to avail a discount.

Get 1010 percent off on the bill amount
Get a flat discount of Rs. 100100 on the bill amount
What is the maximum discount Chef can avail?

Input Format:

The first line contains a single integer TT - the number of test cases. Then the test cases follow.
The first and only line of each test case contains a single integer XX - the bill amount before discount.

Output Format:
For each testcase, output the maximum discount Chef can avail.

Constraints:
1≤T≤100
100≤X≤10000
X is a multiple of 100.

Input:
3
300
1300
1000

Output:
100
130
100
*/


#include <stdio.h>

int main(void) 
{
    int x=0,y=0,i=0,t=0,pd=0,pt=0;
    scanf("%d",&t);
    for (i=1;i<=t;i++)
    {
        scanf("%d %d",&x,&y);
        pd=x*3;
        pt=y*2;
        if(pd>pt)
            printf("%d\n",pt);
        else
            printf("%d\n",pd);
    }
	// your code goes here
	return 0;
}

