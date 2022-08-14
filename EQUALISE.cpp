#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c=0,res;
	    cin>>a>>b;
	    if(a==b)
	    cout<<"Yes\n";
	    else
	    {
	        if(a<b)
	        {
	            res=a;
	        while(res<b)
	        {
	            res=res*2;
	            
	        }
	        if(res==b)
	        cout<<"YES\n";
	        else
	        cout<<"NO\n";
	        }
	        else 
	        {
	            res=b;
	            while(res<a)
	        {
	            res=res*2;
	            
	        }
	        if(res==a)
	        cout<<"YES\n";
	        else
	        cout<<"NO\n";
	        }
	        }
	        
	    
	}
	return 0;
}
