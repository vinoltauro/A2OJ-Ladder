#include <bits/stdc++.h>
using namespace std;

int main ()
{

	int n;
	cin >> n;

	string s;
	cin >> s;

	int index = 0, count = 0;
	while (index < n)
	{
		int pos = index;
		while (s[pos + 1] == s[index])
			pos ++;
		count += (pos - index);
		index = pos + 1;
	}

	cout << count << endl;

return 0;
}
