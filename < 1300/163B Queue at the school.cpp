#include <bits/stdc++.h>
using namespace std;

int main ()
{

	int n, t;
	cin >> n >> t;

	string s;
	cin >> s;

	vector <char> input;
	for (auto c : s)
		input.push_back(c);

	while (t--)
	{
		for (int i = 0 ; i < input.size() - 1 ; )
		{
			if (input[i] == 'B' and input[i + 1] == 'G')
			{
				swap(input[i], input[i + 1]);
				i += 2;
			}
			else
				i ++;
		}
	}


	for (auto c : input)
		cout << c ;
	cout << endl;


return 0;

}
