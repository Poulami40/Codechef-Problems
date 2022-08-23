#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,d=0;
	    cin>>a>>b;
	    if(a==b)
	        cout<<"Yes\n";
	       else if(abs(a-b)%2==0)
	       cout<<"Yes\n";
	       else
	       cout<<"No\n";
	    
	}
	return 0;
}
