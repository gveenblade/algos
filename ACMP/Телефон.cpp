#include<iostream>
using namespace std;
int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int a,b,c,t;
	int sum=0;
	cin>>a>>b>>c>>t;
	if(t>a)
	{
		sum+=a*b;
		sum+=(t-a)*c;
	}
	else if(t<=a)
	{
		sum+=t*b;
	}
	cout<<sum;
	return 0;
}