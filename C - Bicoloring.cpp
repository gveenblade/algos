#include<iostream>
#include<queue>
using namespace std;
bool used[1110];
bool col[1111];
vector<int> v[1111];
queue<int> q;
bool ans,anss = true;
int n;
void dfs(int vert,int pre)
{
	used[vert]=true;
	if(col[pre]==1) col[vert]=0;
	else col[vert]=1;
	for(int i=0;i<v[vert].size();i++)
	{
		int top = v[vert][i];
		if(used[top]==false)
		{
			dfs(top,vert);
		}
		else if(used[top]==true)
		{
			if(col[top]==col[vert])
			{
				anss =false;
			}
		}
	}
	return ;

}
int main()
{

	freopen("inputC.txt","r",stdin);
	freopen("outputC.txt","w",stdout);
	
	while(true)
	{
		cin>>n;
		if(n==0)
		{
			break;
		}
		int l;
		cin>>l;
		for(int i=1;i<=l;i++)
		{
			int a,b;
			cin>>a>>b;
			v[a].push_back(b);
			v[b].push_back(a);
		}
		dfs(0,0);
		if(anss == true)
		{
			cout<<"BICOLORABLE."<<endl;
		}
		else cout<<"NOT BICOLORABLE."<<endl;
		
		//cout<<ans<<endl;
		/*for(int i=0;i<n;i++)
		{
			cout<<col[i]<<" ";
			
		}
		cout<<endl;*/
		for(int i=0;i<n;i++)
		{
			//cout<<used[i]<<" ";
			anss=true;
			used[i]=0;
			col[i]=0;
			v[i].clear();
		}
		//cout<<endl;
	}
	return 0;	
}