#include<bits/stdc++.h>
using namespace std;
set<int> st;
long long int n,a[111111],b,cnt,mx=1,mn=0,x=1,y=1,q=0,w=0,j,ans=511111,i;
string s;
void solve1()
{	
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int t;
        cin>>t;
        st.insert(t);
    }
    set<int>::iterator it;
    for(it = s.begin();it!=s.end(); ++it){
        if(it==1) cout << (*it) << endl;
    }
}
int main()
{
solve1();
return 0;
}
