#include<iostream>
using namespace std;
int main()
{
	freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	int n;
	string s,c="";
	cin>>n;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(i==n-1)
		{}
		else c+=s[i];
	}
	cout<<c;
}