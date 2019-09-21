#include<bits/stdc++.h>
#define shazam ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
int main()
{
	shazam;
	long long int n,m,k,x,mx=-1,mx1=-1,ans=0,j=1,l=1;
	cin>>n>>m>>k;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(x>=mx)
		{
			mx1=mx;
			mx=x;
		}
		else if(x>=mx1)
		{
			mx1=x;
		}
		//cout<<i<<" "<<mx1<<" "<<mx<<endl;
	}
	long long int q=mx*k;
	long long int w=q+mx1;
	ans+=w*(m/(k+1));
	ans+=mx*(m%(k+1));
	cout<<ans;
	return 0;

}



