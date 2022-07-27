/*Problem
Devendra just had a million-dollar idea and he needs funds to startup. He was recently invited to Sasta Shark Tank (A TV show where entrepreneurs pitch their ideas to investors hoping to get investment in return).

He was offered deals from two investors. The first investor offers AA dollars for 1010% of his company and the second investor offers BB dollars for 2020% of his company. Devendra will accept the offer from the investor whose valuation of the company is more. Determine which offer will Devendra accept or if both the offers are equally good.

For example, if the first investor offers 300300 dollars for 1010% of the company, then the first investor's valuation of the company is 30003000 dollars since 1010% of 3000 = 3003000=300. If the second investor offers 500500 dollars for 2020% of the company, then the second investor's valuation of the company is 25002500 dollars since 2020% of 2500 = 5002500=500.

Input Format:
The first line contains a single integer TT - the number of test cases. Then the test cases follow.
The first and only line of each test case contains two integers AA and BB - the amount offered by first investor for 1010% of Devendra's company and the amount offered by second investor for 2020% of Devendra's company respectively.

Output Format:
For each test case, Output FIRST if Devendra should accept the first investor's deal, output SECOND if he should accept the second investor's deal, otherwise output ANY if both deals are equally good.
You may print each character of the strings in uppercase or lowercase (for example, the strings "FiRst", "First", "FIRST", and "FIrst" will all be treated as identical).

Constraints:
1≤T≤100
100≤A,B≤10000
A and B are multiples of 100

Input:
3
100 200
200 100
200 500

Output:
ANY
FIRST
SECOND
*/

#include <stdio.h>

int main(void) {
	int t=0,i=0,a=0,b=0,p1=0,p2=0;
	scanf("%d",&t);
	for (i=1;i<=t;i++)
    {
        scanf("%d %d",&a,&b);
        p1=a*10;
        p2=b*5;
        if(p1>p2)
            printf("FIRST\n");
        else if(p1==p2)
            printf("ANY\n");
        else
            printf("SECOND\n");
    }
	// your code goes here
	return 0;
}

