#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,s;
	    cin>>x;
	    if(x<=300)
	    s=10*300;
	    else
	    s=10*x;
	    cout<<s<<endl;;
	}
	return 0;
}
