#include<iostream>
using namespace std;
int main()
{
	int s,t;
	cin>>s>>t;
	if(s<=t)
		cout<<t-s;
	else cout<<12+t-s;
	return 0;
}