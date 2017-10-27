#include <iostream>


using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    // writing a reverse loop from b to a.
    // Took the hint that we only need the last digit from the tutorial.
    // also the last digit becomes 0 after multiplication with say 20 or 30 and so on. Damn!
    
    if (b - a >= 10) {
        cout << "0";
        return 0;
    }
    
    long long answer = 1;
    for (long long i = b; i > a; i--) {
        answer = answer * (i % 10) % 10;
    }

    cout << answer;
}
