#include <bits/stdc++.h>


#define pb push_back
#define ll long long
#define mp make_pair
#define F first
#define S second
#define MAXN int(2e9 + 7)


using namespace std;
int main()
{
	long int n,m,b[111111];
	long int mx=-1,mxi;
	long int ans=0;
	long int arr[5] = {0};
	cin>>n>>m;
	char ss[n+1][m+1];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>ss[i][j];
		}
	}
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
	}
	for(int j=0;j<m;j++)
	{
		for(int i=0;i<n;i++)
		{
			if(ss[i][j]=='A')
			{
				arr[0]++;
				if(arr[0]>mx)
				{
					mx=arr[0];
					mxi=0;
				}
			}
			else if(ss[i][j]=='B')
			{
				arr[1]++;
				if(arr[1]>mx)
				{
					mx=arr[1];
					mxi=1;
				}
			}
			else if(ss[i][j]=='C')
			{
				arr[2]++;
				if(arr[2]>mx)
				{
					mx=arr[2];
					mxi=2;
				}
			}
			else if(ss[i][j]=='D')
			{
				arr[3]++;
				if(arr[3]>mx)
				{
					mx=arr[3];
					mxi=3;
				}
			}
			else if(ss[i][j]=='E')
			{
				arr[4]++;
				if(arr[4]>mx)
				{
					mx=arr[4];
					mxi=4;
				}
			}
		}
		ans+=b[j]*arr[mxi];
		mx=-1;
		mxi=0;
		for(int i=0;i<5;i++){
			arr[i]=0;
		}
	}
	cout<<ans;
	return 0;
}