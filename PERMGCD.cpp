#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	     if (x<n)
	     {
	         cout<<-1<<endl;
	         continue;
	     }
	     cout<<x-n+1<<" ";
	     for(int i=1;i<=n;i++)
	     {
	         if(i!=x-n+1)
	         cout<<i<<" ";
	     }
	     cout<<"\n";
	}
	return 0;
}
