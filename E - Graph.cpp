#include<iostream>
using namespace std;
int m[111][111];
int main()
{
	int n,k,u;
	cin>>n;
	/*for(int i = 1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			m[i][j]=0;
		}
	}*/
	for(int i = 1; i <= n;i++)
	{
		cin>>u>>k;
		for(int j = 1;j<=k;j++)
		{
			int v;
			cin>>v;
			m[u][v] = 1;
		}
	}
	for(int i = 1;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			cout<<m[i][j]<<" ";
		}
		cout<<m[i][n];
		cout<<endl;
	}
	for(int i=1;i<n;i++)
	{
		cout<<m[n][i]<<" ";
	}
	cout<<m[n][n]<<endl;
	return 0;
}