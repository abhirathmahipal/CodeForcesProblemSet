#include <iostream>
using namespace std;

// Couldn't solve it even after trying it several times.
// Used https://github.com/DionysiosB/CodeForces/blob/master/115A-Party.cpp

int main()
{
	int n;
	cin >> n;
	// Getting input, chain stores the immediate boss
	int chain[n + 1];

	for (int i = 1; i <= n; i++) cin >> chain[i];

	// A basic DFS search to find the longest chain
	int deepest_depth = 0, boss;
	for (int i = 1; i <= n; i++)
	{
		int temp = 1;
		boss = chain[i];
		while(boss != -1){boss = chain[boss]; temp++;}
		if (temp > deepest_depth) deepest_depth = temp;
	}

	cout << deepest_depth << '\n';

	return 0;
	
}