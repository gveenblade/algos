#include<iostream>
using namespace std;
int sum(int n)
{
	int cnt=0;
	while(n>9)
	{
		cnt+=n%10;
		n=n/10;
	}
	return cnt+n;
}
int main()
{
	int n;
	cin>>n;
	int a = n;
	for(int i=n;i<=1010;i++)
	{
		if(sum(i)%4==0)
		{
			cout<<i;
			break;
		}
	}
	return 0;
}