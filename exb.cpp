#include<iostream>
using namespace std;
struct data{
	int x1;
	int y1;
	int x2;
	int y2;
	char color;
};
int main()
{	
	int t;
	cin>>t;
	for(int times=1;times<=t;times++)
	{
		long long int n,m,r;
		cin>>n>>m;
		char a[n][m];
		cin>>r;
		data save[r];

		for(int y=1;y<=r;y++)
		{
			long long int r1,c1,r2,c2;
			char l;
			cin>>r1>>c1>>r2>>c2>>l;
			save[y].x1 = r1;
			save[y].y1 = c1;
			save[y].x2 = r2;
			save[y].y2 = c2;
			save[y].color = l;
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				for(int k=r+1;k>0;k--)
				{
					if(i>=save[k].x1 && i<=save[k].x2 && j>=save[k].y1 && j<=save[k].y2)
					{
						a[i][j] = save[k].color;
					}

				}
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cout<<a[i][j];
			}
			cout<<endl;
		}

	}
	
	return 0;
}