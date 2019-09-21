#include<iostream>
using namespace std;
string s,res;
int n;
int l,r,i;
char ans[2111];
void solve1()
{
	cin>>n;
	cin>>s;
	l=0;
	r=n-1;
	i=n-1;
	do
	{
		ans[r--]=s[i--];
		if(i<0) break;
		ans[l++]=s[i--];
	} while(l<=r);
	for(int i=0;i<n;i++)
	{
		res+=ans[i];
	}
	cout<<res;
}
int main()
{
	solve1();
	return 0;
}