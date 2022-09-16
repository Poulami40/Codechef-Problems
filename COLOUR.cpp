#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a[3],s=0,c=0;
	    cin>>a[0]>>a[1]>>a[2];
	    sort(a,a+3);
	    int res=0;
	    for(int i=0;i<3;i++)
	    {
	        if(a[i]>=1)
	        res++;
	    }
	    if(a[0]==2)
	    cout<<(a[2]>=3?res+2:res+1)<<endl;
	    else if(a[0]>=3)
	    cout<<res+3<<endl;
	    else
	    cout<<(a[1]<=1?res:res+1)<<endl;
	}  
	return 0;
}
