#include <bits/stdc++.h>
using namespace std;

int main ()
{


	string s;
	cin >> s;
	int index = 0;

	while (index < s.size())
	{

		if (s[index] == '-'  and s[index + 1] == '-')
		{
			cout << 2 ;
			index += 2;

		}

		else if (s[index] == '-' and s[index + 1] == '.' )
		{
			cout << 1;
			index += 2;
		}

		else
		{
			cout << 0 ;
			index += 1;
		}

	}



	return 0;
}
