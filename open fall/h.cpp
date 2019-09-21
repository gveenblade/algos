#include <bits/stdc++.h>


#define pb push_back
#define ins insert
#define ll long long
#define mp make_pair
#define x first
#define y second
#define MAXN int(1e5+100)

using namespace std;


map<pair<double, double>, set<int> > m;
map<pair<double, double>, set<int> >::iterator it, it2;

double K(int x1, int y1, int x2, int y2) {
	if(x1-x2 == 0) return MAXN;
	return (y1-y2)/(x1-x2);
}

double B(int x1, int y1, int x2, int y2) {
	return y1 - x1*K(x1, y1, x2, y2);
}


bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.x < b.x) return true;
	if(a.y < b.y) return true;
	return false;
}

void solve()
{
	int n, x1, y1, x2, y2;
	vector<pair<int, int> > p;


	int k, b;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>x1>>y1;
		p.pb(mp(x1, y1));
	}

	sort(p.begin(), p.end(), cmp);

	for(int i=2; i<p.size(); i++) {
		 k = K(p[i].x, p[i].y, p[i-1].x, p[i-1].y);
		 b = B(p[i].x, p[i].y, p[i-1].x, p[i-1].y);
		 	m[mp(k, b)].ins(i);
		 	m[mp(k, b)].ins(i-1);

		 k = K(p[i].x, p[i].y, p[i-2].x, p[i-2].y);
		 b = B(p[i].x, p[i].y, p[i-2].x, p[i-2].y);
		 	m[mp(k, b)].ins(i);
		 	m[mp(k, b)].ins(i-2);

		 k = K(p[i-1].x, p[i-1].y, p[i-2].x, p[i-2].y);
		 b = B(p[i-1].x, p[i-1].y, p[i-2].x, p[i-2].y);
		 	m[mp(k, b)].ins(i-2);
		 	m[mp(k, b)].ins(i-1);

	}
	int mx = 0;
	vector<int> ans;
	for(it=m.begin(); it != m.end(); it++) {
		k = it->x.x;
		b = it->x.y;
		set<int> st = it->y;

		bool ok = false;
		int cnt = 0;

		for(int i=0; i<n; ++i) {
			if(k*p[i].x + b == p[i].y){
				if(!ok){
					ok=true;
					x1 = p[i].x;
					y1 = p[i].y;
				}
				cnt++;
				x2 = p[i].x;
				y2 = p[i].y;
			}
		}
		if(mx < cnt){
			ans.clear();
			mx = cnt;
			ans.pb(x1);
			ans.pb(y1);
			ans.pb(x2);
			ans.pb(y2);
		}
	}

	cout << ans[0] << ' ' << ans[1] << ' ' << ans[2] << ' ' << ans[3];

}
int main()
{
	solve();
	return 0;
}
