#include<iostream>
#include<queue>
#include<sstream>
using namespace std;
long long int n,a,b;
string ans="";
string toString(int a)
{
	stringstream os("");
	os<<a;
	string st="";
	os>>st;
	return st;

}
int main()
{	
	cin>>a>>b>>n;
	int res=a%b;
	ans=toString(a);
	for(int j=1;j<=n;j++)
	{
		for(int i=0;i<=9;i++)
		{
			if((res*10+i)%b==0)
			{
				ans+=toString(i);
				res=res*10+i;
				res%=b;
				break;
			}
			if(i==9)
			{
				cout<<-1;
				return 0;
			}
		}
	}
	cout<<ans;
	return 0;
}
