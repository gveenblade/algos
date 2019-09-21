#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define mp make_pair
#define F first
#define S second
#define MAXN int(2e9 + 7)

int Xor(int a, int b)
{
	return (a xor b);
}
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if ((Xor(a,b) > c) and (Xor(a,c) > b)) 
	{
		cout << "Makenti" << endl;
		return 0;
	}
	if ((Xor(b,a) > c) and (Xor(b,c) > a))
	{
		cout << "Makenti" << endl;
		return 0;
	}
	if ((Xor(c,b) > a) and (Xor(c,a) > b))
	{
		cout << "Makenti" << endl;
		return 0;
	}
	cout << "Askar" << endl;
	return 0;
}
