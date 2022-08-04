#include <iostream>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if(n==3)
	    {
	        cout<<1<< ' '<<2<<' '<<3<<endl;
	    }
	    else{
	        cout<<n<<' ';
    	    cout<<n-3<<' ';
    	    for(int i=1;i<n-3;i++)
    	    {
    	        cout<<i<<' ';
    	    }
    	    cout<<n-2<<' ';
    	    cout<<n-1<<' ';
    	    cout<<endl;
	    }
	}
	return 0;
}
