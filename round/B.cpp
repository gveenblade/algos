#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	long long int n,m,k,b[1111111],mx=-1,mx1=-1,ans=0,j=1,l=1;
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>b[i];
	}
	sort(b+1,b+n+1);
	mx=b[n];
	mx1=b[n-1];
	int q=mx*k;
	int w=q+mx1;
	ans+=w*(m/(k+1));
	ans+=q*(m%(k+1));
	cout<<ans;
	return 0;

}



