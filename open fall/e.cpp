#include <bits/stdc++.h>


#define pb push_back
#define ll long long
#define mp make_pair
#define F first
#define S second
#define MAXN int(2e9 + 7)

using namespace std;

void solve()
{
	string s;
	int c = 0;
	getline(cin, s);
	for(int i=0; i<s.size(); i++) {
		if(s[i] != ' ') {
			s[i] = char((s[i] - 2 - c));
			if(s[i] < 'a') s[i] += 26;
			c++;
		}
		//else c=0;
	}
	cout << s;
}
int main()
{
	solve();
	return 0;
}
