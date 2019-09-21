#include<iostream>
#include<queue>
using namespace std;

bool used[110];
vector<int> v[110];
int d[110];
int a[111][111];
queue<int> q;

void bfs(int vert)
{
	q.push(vert);
	used[vert] = true;
	while (!q.empty())
	{
		int top = q.front();
		q.pop();
		for (int i = 0; i < v[top].size(); i++)
		{
			int to = v[top][i];
			if (!used[to])
			{
				used[to] = true;
				q.push(to);
				d[to] = d[top] + 1;
			}
		}
	}
}

int main()
{	
	int n,from,to;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
			if(a[i][j]==1)
			{
				v[i].push_back(j);
				v[j].push_back(i);
			}
		}
			
	}
	cin>>from>>to;
	bfs(from);
	if(from==to)
	{
		cout<<0;
	}
	else if(d[to]==0) cout<<-1;
	else cout << d[to];
	return 0;
}
