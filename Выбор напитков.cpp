#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v;
int a[1111],res;
int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		int t; 
		cin>>t;
		a[t]++;
		a[t]=a[t]%2;
	}
	for(int i=1;i<1111;i++)
	{
		if(a[i]>0) res++;
		//cout<<a[i]<<" ";
	}
	//cout<<res<<endl;
	cout<<n - res + res/2 + res%2;
	return 0;	
}