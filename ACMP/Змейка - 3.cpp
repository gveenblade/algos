#include<iostream>
using namespace std;
int main()
{
	int a[111][111];
	int n,m,x,y;
	int cnt=0;
	cin>>n>>m>>x>>y;
	for(int i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			for(int j=1;j<=m;j++)
			{

				a[i][j]=cnt++;
			}
		}
		else if(i%2==0)
			for(int j=m;j>=1;j--)
			{
				a[i][j]=cnt++;
			}
	}
	cout<<a[x][y];
	return 0;
}

