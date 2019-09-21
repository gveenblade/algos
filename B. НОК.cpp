#include<iostream>
#include<cmath>
using namespace std;
int a[1111],b[1111],c[1111];
void isprime(int n)
{
	for (int i = 1; i <= n ; i++)
    a[i] = i;
  	for (int j = 2; j < n + 1; j++)
  	{
   		if (a[j] != 0)
   	 	{
      		for (int l = j*j; l < n + 1; l += j)
      		a[l] = 0;
    	}
	}
}

long long gcd (long long a, long long b)
{
	if (b == 0) return a;
	return gcd(b, a % b);
}
int main()
{
	
	long long int n,m,y,sum=1;
	cin>>n;
	m=n;
	y=n;
	isprime(sqrt(n));
	n = sqrt(n);
	for (int i = 1; i <= n; i++)
    c[i] = 1;
	while(m>1)
	{
		for(int i=1;i<=n;i++)
		{
			if(m%a[i]==0)
			{
				c[i]++;
				m=m/a[i];
				break;
			}
		}
	} 
	for(int i=1;i<=y;i++)
	{
		sum=sum*c[i];
	}
	cout<<sum;
	return 0;
}

