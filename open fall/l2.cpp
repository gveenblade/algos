#include <bits/stdc++.h>

#define pb push_back
#define ll long long
#define mp make_pair
#define F first
#define S second
#define MAXN int(2e9 + 7)

using namespace std;

map<string, int> was;
vector<pair<int, vector<string> > > arr;
vector<string>::iterator vit;

int n, cnt = 0, effort = 0;

void del(string s) {
	vector<string> v;
	int k;
	for(int i=0; i<arr.size(); i++) {
		k = arr[i].F;
		v = arr[i].S;
  		vit = find (arr[i].S.begin(), arr[i].S.end(), s);
		if(vit != arr[i].S.end()){
			arr[i].F--;
			arr[i].S.erase(vit);
		}
	}
}

void solve()
{
	vector<string> v;
	int k;

	string name, s;
	cin>>n;

	for(int i=0; i<n; i++) {
		cin>>name;
		cin>>k;
		for(int j=0; j<k; j++) {
			cin>>s;
			v.pb(s);
		}
		arr.pb(mp(k, v));
		v.clear();
	}

	
	while(!arr.empty()) {
		sort(arr.begin(), arr.end());
		k = arr[0].F;
		v = arr[0].S;
		arr.erase(arr.begin());
		//cout << k << '\n';
		effort += max(0, k-1);
		for(int j=0; j<k; j++) {
			string s = v[j];
			del(s);
		}
	}
	cout << effort;
}


int main()
{
	solve();
	return 0;
}
