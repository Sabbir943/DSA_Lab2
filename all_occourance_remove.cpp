#include <iostream>

using namespace std;

void removeAll(int source[], int size, int element) {
    int index = 0;  // Index for placing non-element values
    
    // Traverse the source array
    for (int i = 0; i < size; ++i) {
        if (source[i] != element)
         {
            source[index] = source[i];
            ++index;
        }
    }

    // Fill the remaining positions with zeros
    for (int i = index; i < size; ++i) {
        source[i] = 0;
    }

    // Print the resulting array
    for (int i = 0; i < size; ++i) {
        cout << source[i] << " ";
    }
    cout << endl;
}

int main() {
    int source[] = {10, 2, 30, 2, 50, 2, 2, 0, 0};
    int size = sizeof(source) / sizeof(source[0]);
    int element = 50;

    removeAll(source, size, element);  // Output should be 10 30 50 0 0 0 0 0 0

    return 0;
}
