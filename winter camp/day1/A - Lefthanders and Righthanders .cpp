#include<iostream>
#include<queue>
#include<stack>
using namespace std;
stack<int> l;
stack<int> r;
int n;
string s;
char c;
int main()
{	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	cin>>n>>s;
	for(int i=1;i<=n/2;i++)
	{
		if(s[i-1]=='R')
			cout<<n/2+i<<" "<<i<<endl;
		else cout<<i<<" "<<n/2+i<<endl;
	}
	
	return 0;
}
