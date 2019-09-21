#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int times=1;times<=n;times++)
	{
		bool breakpoint = false;
		string s,se;
		cin>>s>>se;
		s+="";
		se+="";
		if(se.size()<s.size())
		{
			cout<<"NO"<<endl;
			breakpoint = true;
		}
		else 
		{
			int j=0;
			for(int i=0;i<=se.size();i++)
			{
				if(s[j]==se[i]&&s[j]==se[i+1])
				{

				}
				else if(s[j]==se[i]&&s[j]!=se[i+1])
				{
					j++;
				}
				else 
				{
					breakpoint=false;
					break;
				}
			}
		}
		if(!breakpoint) cout<<"YES"<<endl;
	}
	return 0;
}