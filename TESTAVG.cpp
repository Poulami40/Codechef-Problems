#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    float a,b,c;
	    cin>>a>>b>>c;
	    int r1=(a+b)/2;
	    int r2=(b+c)/2;
	    int r3=(c+a)/2;
	    if(r1<35||r2<35||r3<35)
	    cout<<"fail\n";
	    else
	    cout<<"pass\n";
	}
	return 0;
}
