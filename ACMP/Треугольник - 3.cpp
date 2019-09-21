#include<iostream>
#include<cmath>
#include<cstdio>
   
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int x,y,z;
    cin>>x>>y>>z;
    if(x+y<=z||x+z<=y||y+z<=x) cout<<"NO";
    else cout<<"YES";
     
    return 0;
}