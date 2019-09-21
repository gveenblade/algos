#include<iostream>
#include<sstream>
#include<cmath>
#include<stack>
using namespace std;

int GCD(int a, int b)
{
    while(a > 0 && b > 0)
 
        if(a > b)
            a %= b;
 
        else
            b %= a;
 
    return a + b;
}

int main()
{

	int n,a[11111],gcd;
	cin>>n;
	for(int i =1;i<=n;i++)
	{
		cin>>a[i];
	}
	gcd = GCD(a[1],a[2]);
	for(int i =3;i<=n;i++)
	{
		if(gcd>=GCD(gcd,a[i]))
		{
			gcd = GCD(gcd,a[i]);
		}
		
	}
	cout<<gcd;
	return 0;
	
}
