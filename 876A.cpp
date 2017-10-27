#include <iostream>
#include <algorithm>

using namespace std;

int indexOfSmallest(int array[]) {
    int smallestSoFar = 0;
    for (int i = 0; i < 3; i++) {
        if (array[i] < array[smallestSoFar])
            smallestSoFar = i;
    }

    return smallestSoFar;
}

int main() {
    int n, a, b, c;

    cin >> n >> a >> b >> c;
    int house = 0; // currently in Rabbit's house
    int matrix[3][3] = {
        {10000, a, b},
        {a, 10000, c},
        {b, c, 10000}
    };

    int distance = 0, travelTo;
    for(int i = n - 1; i > 0; i--) {
        travelTo = indexOfSmallest(matrix[house]);
        distance += matrix[house][travelTo];
        house = travelTo;
    }

    cout << distance;

    return 0;

}