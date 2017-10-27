#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, single_kayaks = 2;
    cin >> n;
    int people_count = n << 1, double_kayaks = people_count - 2;
    // cout << people_count;

    int weights[people_count];
    int result = 2 << 20; // a big result
    for (int i = 0; i < people_count; i++)
        cin >> weights[i];

    
    // main loop to test the solution
    // I could just sort group by two in the reverse order if
    // those two extra single kayaks weren't around.

    // referred to an existing solution again :(
    
    // basically brute forcing single kayaks (i and j) and then computing
    // cost for each combination of i and j

    // temp holder for computing instability
    vector <int> temp;
    sort(weights, weights + people_count);
    for (int i = 0; i < people_count; i++) {

        for (int j = i + 1; j < people_count; j++) {
            for (int k = 0; k < people_count; k++) {
                if (k != i && k != j) {
                    // i and j are taken as single kayaks
                    temp.push_back(weights[k]);
                }
            }
        
            int temp_result = 0;

            for (int k = 0; k < int(temp.size()); k += 2) {
                temp_result += temp[k+1] - temp[k];
            }

            result = min(temp_result, result);
            temp.clear();

        }
    }

    cout << result;
            


    return 0;
}