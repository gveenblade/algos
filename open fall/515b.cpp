#include <bits/stdc++.h>
using namespace std;

long long gcd (long long a, long long b)
{
	if (b == 0) return a;
	return gcd(b, a % b);
}


int main()
{
	long long a, c;
	cin >> a >> c;
	long long g = gcd(a, c);
	if (c / g == a or c / g == c)
	{
		if (2 * c / g == a or 2 * c / g == c)
		{
			cout << 3 * c / g << endl;
		}
		else cout << 2 * c / g << endl;
	}
	else cout << c / g << endl;
	return 0;
}

