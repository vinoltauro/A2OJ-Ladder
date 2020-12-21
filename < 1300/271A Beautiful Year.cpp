#include <bits/stdc++.h>
using namespace std;

bool check (int n)
{
	unordered_map <int, int> input;
	while (n)
	{
		int dig = n % 10;
		if (input.count(dig))
			return false;
		input[dig] = 1;
		n = n / 10;
	}

	return true;
}

int main ()
{


	int n;
	cin >> n;

	for (int i = n + 1; i <= 10000; i ++)
	{
		if (check(i))
		{
			cout << i << endl;
			break;
		}
	}


	return 0;
}
