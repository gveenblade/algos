#include<bits/stdc++.h>
using namespace std;
long long int n,a[111111],b,cnt,mx=1,mn=0,x=1,y=1,q=0,w=0,j,ans=511111,i;
string s;
void solve1()
{	
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	cin>>n;
    for (i=1;i<=n;i++)
    cin>>a[i];
    sort(a+1,a+1+n);
    for (i=1;i<=n;i++)
    {
        while (j<n&&a[j+1]<=2*a[i]) j+=1;
        ans=min(ans,i+n-j-1);
    }
    cout<<ans;
}
//3 3 4 5 7 8
// 
int main()
{
solve1();
return 0;
}
