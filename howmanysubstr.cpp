#include<iostream>
using namespace std;

int isPalindrome(string str)
{
	int cnt=0;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]==str[str.size()-i-1])
		{
			cnt++;
		}
	}
	if(cnt==str.size())
	{
		return 1;
	}
	else return 0;
}
string getPalindrome(string str)
{
	if(isPalindrome(str)==1)
	{
		return "Is_Palindrome";
	}
	else return "Not_Palindrome";
}
//void checkSubstringPalindrome(string subStr, string iStringData, string oStringData, int nrIOfileLines);
int howManySubstrings(string subStr, string str)
{
	int ans = 0;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]==subStr[0])
		{
			int cnt=0;
			for(int j=0;j<subStr.size();j++)
			{

				if(str[i+j]==subStr[j])
				{
					cnt++;
					
				}
			}
			if(cnt==subStr.size())
			{
				ans++;
				i+=subStr.size();
			}
			cnt=0;
		}
		
	}
	return ans;
}
int main()
{
	string ss,sb;
	cin>>ss>>sb;
	
	cout<<howManySubstrings(sb,ss)<<endl;
	cout<<getPalindrome(ss);
	return 0;
	
}