#include <bits/stdc++.h>

#define pb push_back
#define ll long long
#define mp make_pair
#define F first
#define S second
#define MAXN int(2e9 + 7)

using namespace std;

map<string, int> was;
multimap<int, vector<string> > arr;
multimap<int, vector<string> >::iterator it, it2;
vector<string> v;
vector<string>::iterator vit;
int n, k, cnt = 0, effort = 0;

multimap<int, vector<string> >::iterator del(string s) {
	it2 = it;
	for(it2; it2 != arr.end(); it2++) {
		k = it2->F;
		v = it2->S;
  		vit = find (v.begin(), v.end(), s);
		if(vit != v.end()){
			v.erase(vit);
			(it2->S).clear();
			k--;
		}
		arr.insert(mp(k, v));


	}
}
void count() {

	k = it->F;
	v = it->S;
	//cout << k << '\n';
	for(int j=0; j<k; j++) {
		string s = v[j];
		if(was[s] != 1) {
			was[s] = 1;
			if(cnt == 0) {
				cnt++;
			}
			else {
				effort++;
				del(s);
				
			}
		}
	}
}

void solve()
{
	
	string name, s;
	cin>>n;

	for(int i=0; i<n; i++) {
		cin>>name;
		cin>>k;
		for(int j=0; j<k; j++) {
			cin>>s;
			v.pb(s);
		}
		arr.insert(mp(k, v));
		v.clear();
	}
	it = arr.begin();
	while(it != arr.end())
	{
		count();
		cnt = 0;
		it++;
	}
	cout << effort;
}


int main()
{
	solve();
	return 0;
}
