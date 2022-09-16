#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long n,a,b,sum=0;
	    long long m;
	    cin>>n>>m;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    for(int i=0;i<n;i++)
	    {
	        a=abs(arr[i]-m);
	        b=abs(arr[i]-1);
	        if(a>b)
	        sum=sum+a;
	        else
	        sum=sum+b;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
