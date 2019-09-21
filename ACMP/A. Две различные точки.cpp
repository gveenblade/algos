#include<iostream>
using namespace std;
int main()
{
	int l,r,t,y,n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>l>>r>>t>>y;
		if(l==t)
		{
			cout<<l<<" "<<t+1<<endl;
		}
		else 
			cout<<l<<" "<<t<<endl;
	}
	return 0;
}