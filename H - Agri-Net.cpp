#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
vector<int> v[1111];
vector<pair<int,pair<int,int> > > node;
bool used[1111];
int range[1111],parent[1111];
int n,k;
int m[1111][1111];
int sum=0;

int getParent(int vert)
{
	if(vert==parent[vert])
	{
		return vert;
	}
	else 
	{
		return parent[vert] = getParent(parent[vert]);
	}
}
void merge(int l,int r)
{
	l=getParent(l);
	r=getParent(r);
	if(l==r)
	{
		return ;
	}
	else
	{
		parent[l]=r;
	}

}
int main()
{
	while(cin>>n)
	{
		node.clear();
		sum = 0;
		for(int i=1;i<=n;i++)
		{
			parent[i]=i;
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cin>>m[i][j];
				if(i>j)
				{
					node.push_back(make_pair(m[i][j],make_pair(i,j)));
				}
			}
		}
		
		sort(node.begin(),node.end());
		for(int i=0;i<node.size();i++)
		{
			int f=node[i].second.first;
			int s=node[i].second.second;
			f = getParent(f);
			s = getParent(s);
			if(f==s)
			{

			}
			else 
			{	
				merge(f,s);
				sum += node[i].first;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
