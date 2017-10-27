#include <iostream>

using namespace std;
int main() {
    int up, down, n;
    cin >> up >> down;
    n = up + down + 1;
    // had to refer solutions to understand the problem

    for (int i = 0; i <= up; i++)
        cout << down + i + 1 << " ";
    
    for (int i = 0; i < down; i++)
        cout << down - i << " ";
    return 0;
}