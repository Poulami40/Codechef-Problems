#include <iostream>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int r,c=0;
	    long long int x;
	    scanf("%d",&x);
	    
	    for(int i=1;i*i<x;i++)
	    {
	        
	            
	            if((x-2*i)%(i+2)==0&&x!=2*i)
	            {
	            cout<<"YES"<<endl;
	            c++;
	            break;
	            }
	        
	    }
	    if(c==0)
	    printf("NO\n");
	    
	}
	return 0;
}
