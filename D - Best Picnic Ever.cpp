#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
vector<int> v[1111];
bool used[1111];
int b,chel[1111];
int sum[1111];
int step = 1;
queue<int> q;
int n,s,u,m,que,k,ans;
void dfs(int vert)
{
	if(used[vert] ==true)
	{
		return;
	}
	else
	{
		used[vert]=true;
		sum[vert]++;
		for(int i=0;i<v[vert].size();i++)
		{
			if(used[v[vert][i]]==false)
			{
				dfs(v[vert][i]);
			}
		}
	}
	return ;
}
int main()
{

/*	freopen("inputA.txt","r",stdin);
	freopen("outputA.txt","w",stdout);
*/	
	int test;
	cin>>test;
	for(int t=1;t<=test;t++)
	{
		cin>>k>>n>>m;
		for(int i=1;i<=k;i++)
		{
			cin>>chel[i];
		}
		for(int i=1;i<=m;i++)
		{
			cin>>s>>u;
			v[s].push_back(u);
		}
		for(int i=1;i<=k;i++)
		{
			dfs(chel[i]);
			for(int j=1;j<=n;j++)
			{
				used[j]=false;
			}
		}
		for(int i=1;i<=n;i++)
		{
			//cout<<sum[i]<<endl;
			if(sum[i]==k)
			{
				ans++;
			}
		}
		cout<<"Case "<<t<<": "<<ans<<endl;
		for(int i=1;i<=n;i++)
		{
			ans=0;
			sum[i]=0;
			v[i].clear();
		}
	}
	return 0;
}
