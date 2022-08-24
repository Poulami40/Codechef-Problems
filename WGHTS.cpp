#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int w,x,y,z;
	    cin>>w>>x>>y>>z;
	    if(w==x||w==(x+y)||w==(x+z)||w==y||w==(y+z)||w==(x+y+z)||w==z)
	    cout<<"yes\n";
	    else
	    cout<<"no\n";
	}
	return 0;
}
