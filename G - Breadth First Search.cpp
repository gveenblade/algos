#include<iostream>
#include<queue>
using namespace std;

bool used[110];
vector<int> v[110];
int d[110];
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
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int from, m, to;
		cin >> from >> m;
		for (int j = 0; j < m; j++)
		{
			cin >> to;
			v[from].push_back(to);
		}
	}

	bfs(1);

	for (int i = 1; i <= n; i++)
	{
		cout << i << " ";
		if (i != 1 && d[i] == 0) cout << -1 << endl;
		else cout << d[i] << endl;
	}

	return 0;
}
