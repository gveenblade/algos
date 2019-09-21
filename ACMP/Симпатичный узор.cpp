#include<iostream>
using namespace std;
int main()
{
	freopen("INPUT.TXT","r",stdin);
	freopen("OUTPUT.TXT","w",stdout);
	char a[5][5];
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=4;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1;i<4;i++)
	{
		for(int j=1;j<4;j++)
		{
			if(a[i][j]==a[i][j+1]&&a[i][j]==a[i+1][j]&&a[i][j]==a[i+1][j+1])
			{
				cout<<"No";
				return 0;
			}
		}
	}
	cout<<"Yes";
	return 0;
	
}