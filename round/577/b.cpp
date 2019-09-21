#include <bits/stdc++.h>


#define pb push_back
#define ll long long
#define mp make_pair
#define F first
#define S second
#define MAXN int(2e9 + 7)



using namespace std;
void solve1(){
	int n,i=1;
	int a[111111];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	while(i<n)
	{
		a[i]--;
		a[i-1]--;
		if(a[i-1]==0) i++;
		if(a[i-1]==0) i++;
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

void solve2()
{


	
}
int main()
{
	ll n;

	cin>>n;
	ll sum =0;
	ll a[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	sort(a,a+n);
	if(sum%2==1)
	{
		cout<<"NO";
		return 0;
	}
	if(sum-a[n-1]<a[n-1])
	{
			cout<<"NO";
			return 0;
	}
	cout<<"YES";
	return 0;
}