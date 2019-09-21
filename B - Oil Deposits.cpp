#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
vector<int> v[1111];
bool used[111][111];
int b,a[111][111];
int step = 1;
int sum=0;
queue<int> q;
int n,s,u,m,que;
char c[111][111];
void dfs(int i,int j)
{
	if(used[i][j] ==true)
	{
		return;
	}
	else
	{
		used[i][j]=true;
		if(used[i-1][j-1]==false&&c[i-1][j-1]=='@')
		{
			dfs(i-1,j-1);
		}
		if(used[i-1][j]==false&&c[i-1][j]=='@')
		{
			dfs(i-1,j);
		}
		if(used[i-1][j+1]==false&&c[i-1][j+1]=='@')
		{
			dfs(i-1,j+1);
		}
		if(used[i][j-1]==false&&c[i][j-1]=='@')
		{
			dfs(i,j-1);
		}
		if(used[i][j+1]==false&&c[i][j+1]=='@')
		{
			dfs(i,j+1);
		}
		if(used[i+1][j-1]==false&&c[i+1][j-1]=='@')
		{
			dfs(i+1,j-1);
		}
		if(used[i+1][j]==false&&c[i+1][j]=='@')
		{
			dfs(i+1,j);
		}
		if(used[i+1][j+1]==false&&c[i+1][j+1]=='@')
		{
			dfs(i+1,j+1);
		}
		
	}
	return ;
}
int main()
{
	/*freopen("inputB.txt","r",stdin);
	freopen("outputB.txt","w",stdout);
	*/while(true)
	{
		cin>>n>>m;
		if(n==0&&m==0)
		{
			break;
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cin>>c[i][j];
			}
		}
		
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				if(c[i][j]=='@' && !used[i][j]){
					sum++;
					dfs(i,j);
				}
			}
		}
		cout<<sum<<endl;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				c[i][j]='*';
				used[i][j]=false;
			}
		}
		sum=0;	
	}
	return 0;
}
