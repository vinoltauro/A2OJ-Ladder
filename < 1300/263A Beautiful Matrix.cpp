
#include <bits/stdc++.h>
using namespace std;

int main ()
{


	int data, r, c;
	for (int i = 0 ; i < 5 ; i ++)
	{
		for (int j = 0; j < 5 ; j ++)
		{
			cin >> data;
			if (data)
			{
				r =  i;
				c = j;
			}
		}
	}

	cout << abs ( 2 - r)  + abs (2 - c) << endl;
	return 0;
}
