#include<iostream>
using namespace std;
int main()
{
	freopen("INPUT.TXT","r",stdin);
	freopen("OUTPUT.TXT","w",stdout);
	int n;
	cin>>n;
	long long int a[n+1];
	long long int b[n+1];
	long long int w=3;
	long long int sum=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i]=0;
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]==1)
		{
			b[i]=w;
			w++;
		}
		else {
			b[i]=0;
			w=w-3;
			if(w<3) w=3;
		}
	}
	for(int i=1;i<=n;i++)
	{
		//cout<<b[i]<<" ";
		sum+=b[i];
	}
	cout<<sum;
	return 0;
	
}