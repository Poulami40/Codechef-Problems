#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    int d;
	    if(x<=100)
	    d=0;
	    else if(x>100&&x<=1000)
	    d=25;
	    else if(x>1000&&x<=5000)
	    d=100;
	    else
	    d=500;
	    int res=x-d;
	    cout<<res<<endl;
	}
	return 0;
}
