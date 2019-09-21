#include<iostream>
#include<cmath>
#include<math.h>

using namespace std;
int main()
{
	long long int n,x;
	cin>>n>>x;
	int res=0;
	int m=x;
	while(m>1)
	{
		if(m==1)
		{
			cout<<-1;
			return 0;
		}
		else if(n%m==0)
		{
			n=n/m;
			m=x;
			res++;
		}
		else {
			m--;
		}
	}
	if(res==0)
	{
		cout<<-1;
	}
	else cout<<res;
	return 0;
}