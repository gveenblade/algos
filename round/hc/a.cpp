#include<iostream>
#include<algorithm>
using namespace std;
typedef pair< string, string> dual;
dual p[1111];

bool check(string s,string ss)
{
	int cnt=0;
	if(s.size()!=ss.size()-1)
	{
		return false;
	}
	else 
	{
		for(int i=0;i<s.size();i++)
		{
			if(s[i]==ss[i])
			{
				cnt++;
			}
		}
		if(cnt==s.size())
		{
			return true;
		}
	}
	return false;
}
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	string s,ss;
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>s>>ss;
		p[i]= make_pair(s,ss);
	}	
	for(int i=1;i<=m;i++)
	{
		cin>>s>>ss;
		for(int j=1;j<=n;j++)
		{
			if(check(p[j].second,ss)==true)
			{
				cout<<s<<" "<<ss<<" #"<<p[j].first<<endl;
				break;
			}
		}
		
	}
	return 0;
}