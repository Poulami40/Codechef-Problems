/*Problem
Six friends go on a trip and are looking for accommodation. After looking for hours, they find a hotel which offers two types of rooms — double rooms and triple rooms. A double room costs Rs. XX, while a triple room costs Rs. YY.

The friends can either get three double rooms or get two triple rooms. Find the minimum amount they will have to pay to accommodate all six of them.

Input Format
The first line contains a single integer TT - the number of test cases. Then the test cases follow.
The first and only line of each test case contains two integers XX and YY - the cost of a double room and the cost of a triple room.
Output Format
For each testcase, output the minimum amount required to accommodate all the six friends.

Constraints
1≤T≤100
1≤X<Y≤100

Input:
3
10 15
6 8
4 8

Output:
30
16
12
*/


#include <stdio.h>

int main(void) {
	int t=0,x=0,d1=0,d2=0;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
	    scanf("%d",&x);
	    d1=(x/10);
	    d2=100;
	    if(d1>d2)
	        printf("%d\n",d1);
	    else
	        printf("%d\n",d2);
	}// your code goes here
	return 0;
}

