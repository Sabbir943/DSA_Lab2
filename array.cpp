#include <iostream>
using namespace std;
void array_series(int n, int new_array[]) {
    int n_squared = n * n;

    // Initialize all elements of new_array to 0
    for (int i = 0; i <n_squared ; ++i) {
        new_array[i] = 0;
    }

    // Fill the array in the specified pattern
    for (int x = 1; x <= n; ++x) {
        for (int y = 1; y <= x; ++y) {
            new_array[(x * n) - y] = y;
        }
    }
}

int main() {
    int n=3;
    int n_squared = n * n;
    int result[n_squared];  // Declare an array to store the result

    // Call the function to populate the array
    array_series(n, result);

    // Print the result
    for (int i = 0; i <n_squared; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
