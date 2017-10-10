#include <cstdio>
#include <iostream>
#include <vector>
#include <set>

// https://github.com/DionysiosB/CodeForces/blob/master/102A-Clothes.cpp
// referred this for solution ^

using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    std::vector<int> price_vector(n, 0);
    for (int i = 0; i < n; i++)
        cin >> price_vector[i];
    
    
    std::set<std::pair<int, int> > matching_set;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        // b < a match so that they are in index
        // the loop is written from 0
        if (b < a){
            int temp = a;
            a = b;
            b = temp;
        }
        // -1 for easier list indexing
        matching_set.insert(std::pair<int, int>(a - 1, b - 1));

    }
    // check if vector price is right
    // for (int i = 0; i < n; i++)
        // cout << price_vector[i] << "   ";

    int minCost = 10000000;
    for (int x = 0; x < n; x++) {
        for (int y = x + 1; y < n; y++) {
            for (int z = y + 1; z < n; z++) {
                int current_price = price_vector[x] + price_vector[y] + price_vector[z];
                if (matching_set.find(std::pair<int, int>(x, y)) != matching_set.end() &&
                    matching_set.find(std::pair<int, int>(y, z)) != matching_set.end() &&
                    matching_set.find(std::pair<int, int>(x, z)) != matching_set.end() &&
                    current_price < minCost) {
                        // cout << "pass";
                        minCost = current_price;
                }


            }
        }
    }

    if (minCost != 10000000) cout << minCost;
    else cout << "-1";

    return 0;
}
