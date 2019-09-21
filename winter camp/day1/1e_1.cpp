#include <bits/stdc++.h>

using namespace std;

int a[100];
bool checker (int w, int x, int y, int z)
{
	return (a[w] == a[x]) && (a[w] == a[y]) && (a[w] == a[z]);
}	
bool solve()
{
	if (checker(9,11,6,8) &&
		checker(22,24,10,12) &&
		checker(1,3,21,23) &&
		checker(5,7,2,4) &&
		checker(13,14,16,15) &&
		checker(17,19,20,18)) return true;

	if (checker(1,3,6,8) &&
		checker(5,7,10,12) &&
		checker(9,11,21,23) &&
		checker(22,24,2,4) &&
		checker(13,14,16,15) &&
		checker(17,19,20,18)) return true;

	if (checker(13,14,7,8) &&
		checker(5,6,19,20) &&
		checker(17,18,23,24) &&
		checker(21,22,15,16) &&
		checker(1,2,3,4) &&
		checker(9,10,11,12)) return true;

	if (checker(17,18,7,8) &&
		checker(21,22,19,20) &&
		checker(13,14,23,24) &&
		checker(5,6,15,16) &&
		checker(1,2,3,4) &&
		checker(9,10,11,12)) return true;

	if (checker(1,2,14,16) &&
		checker(9,10,13,15) &&
		checker(11,12,17,19) &&
		checker(3,4,18,20) &&
		checker(5,6,7,8) &&
		checker(21,22,23,24)) return true;

	if (checker(11,12,14,16) &&
		checker(3,4,13,15) &&
		checker(1,2,17,19) &&
		checker(9,10,18,20) &&
		checker(5,6,7,8) &&
		checker(21,22,23,24)) return true;
	return false;
}	
int main ()
{
	for (int i = 1; i <= 24; i++)
	{
		cin >> a[i];
	}
	cout << (solve() ? "YES" : "NO");	
	return 0;
}