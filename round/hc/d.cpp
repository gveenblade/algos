#include<iostream>
#include<map>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n;
	cin>>n;	
	int f,s,t,fo;
	
	for(int i=n+1;i<=9999;i++)
	{	
		f= i/1000;
		s= i/100%10;
		t= i/10%10;
		fo=i%10;
		if(f!=s&&f!=t&&f!=fo&&s!=t&&s!=fo&&t!=fo)
		{
			cout<<i;
			return 0; 
		}
	}
	return 0;
}