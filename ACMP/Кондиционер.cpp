#include<iostream>
using namespace std;
int main()
{
	int r,c;
	string s;
	cin>>r>>c;
	cin>>s;
	if(s=="heat")
	{
		if(c>r)
			cout<<c;
		else cout<<r;
	}
	else if(s=="freeze")
	{
		if(c<r)
			cout<<c;
		else cout<<r;
	}
	else if(s=="auto")
		cout<<c;
	else if(s=="fan")
		cout<<r;
	return 0;
}