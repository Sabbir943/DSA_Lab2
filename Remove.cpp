#include <iostream>
using namespace std;

void remove(int source[], int& size, int idx) {
    if (idx >= size || idx < 0) {
        cout << "Index out of bounds" << endl;
        return;
    }

    // Shift elements to the left from idx to end
    for (int i = idx; i < size ; ++i) {
        source[i] = source[i + 1];
    }

    // Decrease the size of the array
    --size;
}

int main() {
    int source[] = {10, 20, 30, 40, 50, 0, 0};
    int size = 7; // Logical size of the array

    int idx = 1; // Index of the element to remove

    remove(source, size, idx);

    // Print the array up to the new logical size
    for (int i = 0; i < size; ++i) {
        cout << source[i] << " ";
    }
    cout << endl;

    return 0;
}
