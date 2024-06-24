#include <iostream>
using namespace std;
bool repetition(int new_array[], int size) {
    const int MAX_VAL = 100; // Assuming elements are in the range [0, 99]
    int count[MAX_VAL] = {0};

    // Count occurrences of each element
    for (int i = 0; i < size; ++i) {
        count[new_array[i]]++;
    }

    // Check for duplicate counts
    bool has_duplicate_counts = false;
    for (int i = 0; i < MAX_VAL; ++i) {
        if (count[i] > 1) {
            for (int j = i + 1; j < MAX_VAL; ++j) {
                if (count[i] == count[j]) {
                    has_duplicate_counts = true;
                    break;
                }
            }
            if (has_duplicate_counts) {
            break;
            }
        }
    }
}

    int main() {
    int new_array[] = {3,4,6,3,4,7,4,6,8,6,6};
    int size = sizeof(new_array) / sizeof(new_array[0]);
    bool ans= repetition(new_array, size);
    cout<<boolalpha<<ans;
    return 0;
}
