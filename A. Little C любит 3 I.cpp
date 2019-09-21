#include<iostream>
#include<sstream>
#include<cmath>
#include<stack>
using namespace std;

int main()
{

	int n;
	cin>>n;
	if(n%3==0)
	{
		cout<<1<<" "<<1<<" "<<n-2;
	}
	else if(n%3==1)
	{
		cout<<1<<" "<<1<<" "<<n-2;
	}
	else if(n%3==2)
	{
		cout<<1<<" "<<2<<" "<<n-3;
	}
	return 0;
	
}
