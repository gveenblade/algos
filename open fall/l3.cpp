#include <bits/stdc++.h>

#define pb push_back
#define ll long long
#define mp make_pair
#define F first
#define S second
#define MAXN int(2e9 + 7)

using namespace std;

vector<pair<int, vector<string> > > v;
int ans = 0;

void solve()
{
	int n;
	vector<string> vs;
	string s;
	int k;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		cin >> k;
		for (int j = 0; j < k; j++)
		{
			cin >> s;
			vs.pb(s);
		}
		v.pb(mp(k, vs));
		vs.clear();
	}

	while (!v.empty())
	{
		sort(v.begin(), v.end());
		ans += max((v[0].F - 1), 0);
		vs = v[0].S;
		for (int j = 0; j < vs.size(); j++)
		{
			string cur = vs[j];
			for (int k = 1; k < v.size(); k++)
			{
				vector<string>::iterator f = find(v[k].S.begin(), v[k].S.end(), cur);
				if (f != v[k].S.end())
				{
					v[k].S.erase(f);
					v[k].F--;
				}
			}
		}
		v.erase(v.begin());
	}

	cout << ans << endl;


}
int main()
{
	solve();
	return 0;
}
