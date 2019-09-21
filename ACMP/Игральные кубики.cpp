#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	long long int n;
	int t=0;
	int q=0,w=0;
	cin>>n;
	
	if(n%6>0)
	{
		q = n/6+1;
		w=n%6;
		t = 6-w+1;

	}
	else 
	{
		t=0;
		q = n/6;
	}
	if(n%6==0)
	{
		cout<<n/6<<" "<<n*6;
	}
	else 
	cout<<(q-1)+t<<" "<<n*6;
	return 0;
}//6 6 6 6 6 6 1
// 1 1 1 1 1 1 6