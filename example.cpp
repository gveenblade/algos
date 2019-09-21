#include<iostream>
using namespace std;
long long int t,a,b,p,quan,dolg;
bool check(string s1, string s2){
	int cnt = 0;
	if(s1.size()==s2.size())
	{
		for(int i=0;i<s1.size();i++)
		{
			if(s1[i]==s2[i])
			{
				cnt++;
			}
			else if((s1[i]=='B'&&s2[i]=='p')||(s1[i]=='b'&&s2[i]=='P')||(s1[i]=='P'&&s2[i]=='b')||(s1[i]=='p'&&s2[i]=='B')||(s1[i]=='B'&&s2[i]=='P')||(s1[i]=='b'&&s2[i]=='p')||(s1[i]=='P'&&s2[i]=='B')||(s1[i]=='p'&&s2[i]=='b'))
			{
				cnt++;
			}
			else if((s1[i]=='E'&&s2[i]=='i')||(s1[i]=='e'&&s2[i]=='I')||(s1[i]=='I'&&s2[i]=='e')||(s1[i]=='i'&&s2[i]=='E')||(s1[i]=='E'&&s2[i]=='I')||(s1[i]=='e'&&s2[i]=='i')||(s1[i]=='I'&&s2[i]=='E')||(s1[i]=='i'&&s2[i]=='e'))
			{
				cnt++;
			}
		}
		if(cnt==s1.size()) return true;
		else return false;
	}
	else return false;
}

int main()
{
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		string s1,s2;
		string q="",w="";
		cin>>s1>>s2;
		for(int j=0;j<s1.size();j++)
		{
			if(s1[j]-0>=65&&s1[j]-0<=90)
			{
				q+=char(s1[j]+32);
			}
			else {
				q+=s1[j];
			}
		}
		for(int j=0;j<s2.size();j++)
		{
			if(s2[j]-0>=65&&s2[j]-0<=90)
			{
				w+=char(s2[j]+32);
			}
			else {
				w+=s2[j];
			}
		}
		if(check(q,w)) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}