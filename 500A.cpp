#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int cells, destination, step;
	cin >> cells >> destination;

	int board[cells];
	int pos = 1;
	bool result = false;

	for (int i = 1; i < cells; i++)
		cin >> board[i];

	while (pos <= destination)
	{

		if (pos == destination)
		{
			cout << "YES";
			result = true;
			break;
		}

		else if(pos == cells)
		{
			cout << "NO";
			result = true;
			break;
		}

		else
		{
			step = board[pos];
			pos += step;
		}
	}

	if (!result)
		cout << "NO";


	return 0;
}