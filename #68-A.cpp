#include <iostream>
#include <algorithm> 
using namespace std;
long long int a[111111];
 
void solve1(int n,int x,int *a) {
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        a[++cnt] = i;
    }
    cout<<a[x]<<endl;
}
void nul(int *a){
    for(int i=0;i<=101101;i++)
    {
        a[i]=0;
    }
}
int main() {
    int t;
    cin >> t;
    for(int T=1;T<=t;T++)
    {
        int n,x;
        cin>>n>>x;
        solve1(n,x,a);
        nul(a);
    }
    return 0;
}