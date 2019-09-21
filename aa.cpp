#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
vector<int> v[1111];
bool used[1111];
int b,a;
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
		
		for(int i=0;i<v[vert].size();i++)
		{
			
			if(used[v[vert][i]]==false)
			{
				
				dfs(v[vert][i]);
				
			}
		}
		q.push(vert);
	}
	return ;

}
int main()
{

/*	freopen("inputA.txt","r",stdin);
	freopen("outputA.txt","w",stdout);
*/	while(true)
	{
		cin>>n>>m;
		if(n==0&&m==0)
		{
			break;
		}
		for(int i=1;i<=m;i++)
		{

			cin>>a>>b;
			v[b].push_back(a);
		}

		for(int i =1;i<=n;i++)
		{
			dfs(i);
		}
		while(q.size()!=1)
		{
			cout<<q.front()<<" ";
			q.pop();
		}
		cout<<q.front()<<endl;
		q.pop();
		
		for(int i=0;i<=1111;i++)
		{
			v[i].clear();
			used[i]=0;
		}
		
	}
	return 0;
}
