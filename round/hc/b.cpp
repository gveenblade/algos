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
	int n;
	int f,se=0;
	cin>>n;

	string s;
	string first="",sec="";
	cin>>s;
	first+=s;
	f=1;
	for(int i=1;i<=n-1;i++)
	{
		cin>>s;

		if(check(first,s)==true)
		{
			f++;
		}
		else 
		{
			sec=s;
			se++;
		}
	}
	if(f>se)
	{
		cout<<first;
	}
	else cout<<sec;
	return 0;
}