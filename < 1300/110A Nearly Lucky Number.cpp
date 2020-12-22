#include <bits/stdc++.h>
#define ll long long
using namespace std;


bool findCount (ll n)
{
	int c = 0;
	while (n)
	{
		int dig = n % 10;
		if (dig == 4 or dig == 7)
			c ++;
		n = n / 10;
	}

	return c == 7 or c == 4;
}

int main ()
{
	ll n;
	cin >> n;

	if (findCount(n))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}
