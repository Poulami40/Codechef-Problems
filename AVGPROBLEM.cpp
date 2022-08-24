#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    float avg=(a+b)/2.0;
	    if(avg>c)
	    cout<<"yes\n";
	    else
	    cout<<"no\n";
	}
	return 0;
}
