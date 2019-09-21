#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
vector<int> v[1111];
bool used[1111];
int d[1111],f[1111];
int step = 1;
queue<int> q;
int n,s,u,m,que;
void dfs(int vert)
{
	if(used[vert] ==true)
	{
		return;
	}
	else
	{
		used[vert]=true;
		d[vert]=step;
		step++;
		for(int i=0;i<v[vert].size();i++)
		{
			
			if(used[v[vert][i]]==false)
			{
				
				dfs(v[vert][i]);
				step++;
			}
		}
		f[vert]=step;

	}
	return ;

}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>m;
		cin>>que;
		for(int j=1;j<=que;j++)
		{
			cin>>u;
			v[m].push_back(u);
		}
	}
	for(int i =0;i<1111;i++)
	{
		sort(v[i].begin(),v[i].end());
	}
	for(int i=1;i<=n;i++)
	{
		dfs(i);
	}
	for(int i=1;i<n;i++)
	{
		cout<<i<<" "<<d[i]<<" "<<f[i]<<endl;
	}
	cout<<n<<" "<<d[n]<<" "<<f[n];
	
	return 0;
}