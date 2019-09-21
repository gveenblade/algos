#include <bits/stdc++.h>
using namespace std;

vector<int> g[110];
vector<int> result;
int pic[1010];
bool used[110];

int main()
{
	int n, m;
	int cnt=0;
	cin>>n>>m;
	
	for(int i=1;i<=m;i++)
	{
		int u, v;
		cin >> u >> v;
		g[u].push_back(v);
	}
	for(int i=1;i<=n;i++)
	{
		if(g[i].size()==0)
		{
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}