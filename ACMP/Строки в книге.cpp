#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	int k,n;
	int q=0,w=0;
	cin>>k>>n;
	if(n%k>0)
	{
		q = n/k+1;
		w = n%k;
	}
	else 
	{
		q = n/k;
		w = k;
	}
	cout<<q<<" "<<w;
	return 0;
}