#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    double n,x,y,a,b;
	    cin>>n>>x>>y>>a>>b;
	    double pp=x/a*n;
	    double pd=y/b*n;
	    if(pd>pp)
	    cout<<"Petrol\n";
	    else if(pp>pd)
	    cout<<"Diesel\n";
	    else
	    cout<<"ANY\n";
	}
	return 0;
}
