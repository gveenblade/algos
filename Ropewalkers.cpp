#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[3],d,cnt=0;
	cin>>a[0]>>a[1]>>a[2]>>d;
	sort(a,a+3);
	int l = a[1]-a[0];
	int r = a[2]-a[1];
	while(l<d||r<d)
	{
		if(l<d)
		{
			l++;
		}
		else if(r<d)
		{
			r++;
		}
		cnt++;
	}
	cout<<cnt;
	return 0;
}