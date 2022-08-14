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
	    int a[n],b[n];
	    int j=0,dis=0,i=0;
	    a[0]=0,b[0]=0;
	   for( i=1;i<n;i++)
	    {
	        cin>>a[i];
	        dis=dis+a[i];
	        b[i]=a[i];
	        a[i]=dis;
	    }
	    
	   for( i=0;i<n-1;i++)
	   {
	       j=a[i+1]-b[i];
	       if(j>0)
	       b[i+1]=b[i]+j+b[i+1];
	       else
	       b[i+1]=b[i]+b[i+1];
	   }
	   cout<<b[i]<<endl;
	}
	return 0;
}
