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
	    if((x-1)>(100-x))
	    cout<<"Right"<<endl;
	    else
	    cout<<"Left"<<endl;
	}
	return 0;
}
