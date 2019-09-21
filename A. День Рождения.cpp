#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int n,m,l,k,d;
	//double d;
	cin>>n>>m>>k>>l;
	if((l+k)%m!=0)
	{
		d = (l+k)/m+1;
	}
	else
	 d = (l+k)/m;
//	cout<<d*m<<endl;*/
	if(m>n||d*m<l+k||n<l+k)
	{
		cout<<-1;
	}
	else cout<<d;
	return 0;
}
