#include<iostream>
#include<cmath>
#include<stack>
using namespace std;
int n,a[111],b,cnt,mx,mn,x=1,y=1,q=0,w=0;
string s;
void solve1()
{	
	cin>>n;
    for(int i=0;i<n;++i)
    {
    	cin>>a[i];
    }
    int ans = 0,tans = 0;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            tans = 0;
            for(int k=i;k<=j;++k)
            {
                tans ^= a[k];
            }
            ans = max(ans,tans);
        }
    }
    cout<<ans;
}

int main()
{
solve1();
return 0;
}
