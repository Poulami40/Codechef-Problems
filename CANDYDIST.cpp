#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   int n,m;
	   cin>>n>>m;
	   int r=n/m;
	   if(n%m==0&&r%2==0)
	   cout<<"Yes\n";
	   else
	   cout<<"No\n";
	}
	return 0;
}
