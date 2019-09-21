#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int cnt = 0;
string s;
int SumOfDigits(string s){
	int temp = 0;
	for(int i=0;i<s.size();i++)
	{
		temp += s[i]-48;
	}
	return temp;
}
int calc(int n)
{
	int ans = 0;
	while(n>0)
	{
		ans+=(n%10);
		n/=10;
	}
	return ans; 
}

int main()
{
	cin>>s;
	int t=0;
	if(s.size()>1)
	{
		t = SumOfDigits(s);
		cnt++;
		while(t>9)
		{
			cnt++;
			t = calc(t);
		}	
	}
	cout<<cnt;
	return 0;
}