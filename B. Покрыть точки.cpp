#include<iostream>
#include<sstream>
#include<cmath>
#include<stack>
using namespace std;

int main()
{

	int n,l,r,mx=-1;
	cin>>n;
	for(int i =1;i<=n;i++)
	{
		cin>>l>>r;
		if(mx<l+r)
		{
			mx=l+r;
		}
		
	}
	cout<<mx;
	return 0;
	
}
