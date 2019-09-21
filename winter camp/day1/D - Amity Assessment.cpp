#include<iostream>
#include<queue>
#include<stack>
using namespace std;
char l[3],r[3];
int n;

string s;
char x;
int main()
{	
	char c[5],ch[5];
	cin>>c[1]>>c[2]>>c[4]>>c[3];
	cin>>ch[1]>>ch[2]>>ch[4]>>ch[3];
	int j=1;
	int y=1;
	for(int i=1;i<=4;i++)
	{
		if(c[i]!='X')
		{
			l[j++]=c[i];
		}
		if(ch[i]!='X')
		{
			r[y++]=ch[i];
		}
	}
	/*for(int i=1;i<=3;i++)
	{
		cout<<l[i]<<" "<<r[i]<<endl;
	}*/
	for(int i=1;i<=3;i++)
	{
		n=0;
		for(int k=1;k<=3;k++)
		{
			if(l[k]==r[k])
			{
				n++;
			}
		}
		if(n==3)
		{
			cout<<"YES";
			return 0;
		}
		else
		{
			r[0]=r[1];
			for(int e=1;e<3;e++)
			{
				r[e]=r[e+1];
			}
			r[3]=r[0];
		}
	}
	cout<<"NO";
	return 0;
}
