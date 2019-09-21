#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	int cost;
	cin >> n >> cost;
	string s[n];
	cost/=2;
	long long count = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	reverse(s, s+n);
	long long res = 0;
	long long cnt = 0;
	for(int i = 0; i < n; i++)
	{
		if (s[i] == "halfplus")
		{
			count+=1;
			count*=2;
			cnt++;
		}
		else count*=2;
	}
	count -= cnt;
	res = count * cost;
	cout << res;
}