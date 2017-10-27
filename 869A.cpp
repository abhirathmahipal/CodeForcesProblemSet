#include <iostream>
#include <vector>
#include <bits/stdc++.h>
// used the tutorial again :(
#define MAXRESULT 2097152 // as given in the tutorial

using namespace std;
int main() {
    int n; cin >> n;
    std::vector<int> k1(n, 0);
    std::vector<int> k2(n, 0);
    bool number_there_or_not[MAXRESULT];
    memset(number_there_or_not, false, sizeof(number_there_or_not));

    for (int i = 0; i < n; i++) {
        cin >> k1[i];
        number_there_or_not[k1[i]] = true;
    }

    for (int i = 0; i < n; i++) {
        cin >> k2[i];
        number_there_or_not[k1[i]] = true;
    }
    
    int total_such_pairs = 0;
    int holder_for_xor_result;
    // running through each list (n^2) complexity
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (number_there_or_not[k1[i] ^ k2[j]]) total_such_pairs++;
        }
    }

    if (total_such_pairs % 2 == 0) cout << "Karen\n"; else cout << "Koyomi\n";

}
