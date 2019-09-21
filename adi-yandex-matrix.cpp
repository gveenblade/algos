#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	int i=n-1;
	int j=n-1;
	int ans=n;
	while(i!=-1||j!=-1)
	{
		if(a[i][j]==1)
		{
			ans=j;
		//	cout<<i<<" "<<j<<"-"<<a[i][j];
			j--;
		}
		else if(a[i][j]==0)
		{
		//	cout<<i<<" "<<j<<"-"<<a[i][j];
			i--;
		}

	}
	cout<<ans;
	
}
