#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	  int na,k,g=0,c=0,sg=0;
	  cin>>na>>k;
	  int a[na];
	  for(int i=0;i<na;i++)
	  {
	      cin>>a[i];
	      g=__gcd(g,a[i]);
	  }
	  for(int i=0;i<na;i++)
	  {
	      sg=__gcd(sg,a[i]);
	      if(sg==g)
	      {
	          sg=0;
	          c++;
	      }
	      if(c==k)
	      break;
	  }
	  if(c==k)
	  {
	      cout<<"YES\n";
	  }
	  else
	  cout<<"NO\n";
	}
	return 0;
}
