#include<iostream>
#include<map>
using namespace std;
typedef pair<string,string> dual;
dual p[1111];
map<string,int> m;
bool check(string s,string ss)
{
	int cnt=0;
	if(s.size()!=ss.size())
	{
		return false;
	}
	else 
	{
		for(int i=0;i<ss.size();i++)
		{
			if(s[i]==ss[i])
			{
				cnt++;
			}
		}
		if(cnt==ss.size())
		{
			return true;
		}
		else return false;
	}
}
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,a[11111],b[11111];
	cin>>n;
	bool t=false;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		if(a[i]>b[i])
		{
			t=true;
		}
	}
	if(t)
	{
		cout<<"Happy Zhiger";
	}
	else cout<<"Poor Zhiger";
	return 0;
}