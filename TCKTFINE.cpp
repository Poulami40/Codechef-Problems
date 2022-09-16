#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,p,q;
	    cin>>x>>p>>q;
	    int f=p-q;
	    if(f>0)
	    cout<<(f*x)<<endl;
	    else
	    cout<<"0"<<endl;
	}
	return 0;
}
