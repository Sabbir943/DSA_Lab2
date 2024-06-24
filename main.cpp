#include <iostream>
using namespace std;

// Function to shift elements to the left by k positions
void shiftLeft(int source[], int size, int k) {
    for (int i = 0; i < size - k; ++i) {
        source[i] = source[i + k];
    }
    for (int i = size - k; i < size; ++i) {
        source[i] = 0;
    }
}

// Function to rotate elements to the left by k positions
void rotateLeft(int source[], int size, int k) {
    int temp[k];
    for (int i = 0; i < k; ++i) {
        temp[i] = source[i];
    }
    for (int i = 0; i < size - k; ++i) {
        source[i] = source[i + k];
    }
    for (int i = 0; i < k; ++i) {
        source[size - k + i] = temp[i];
    }
}

// Function to shift elements to the right by k positions
void shiftRight(int source[], int size, int k) {
    for (int i = size - 1; i >= k; --i) {
        source[i] = source[i - k];
    }
    for (int i = 0; i < k; ++i) {
        source[i] = 0;
    }
}

// Function to rotate elements to the right by k positions
void rotateRight(int source[], int size, int k) {
    int temp[k];
    for (int i = 0; i < k; ++i) {
        temp[i] = source[size - k + i];
    }
    for (int i = size - 1; i >= k; --i) {
        source[i] = source[i - k];
    }
    for (int i = 0; i < k; ++i) {
        source[i] = temp[i];
    }
}

// Function to remove an element at index idx
void remove(int source[], int size, int idx) {
    for (int i = idx; i < size - 1; ++i) {
        source[i] = source[i + 1];
    }
    source[size - 1] = 0;
}

// Function to remove all occurrences of a particular element
void removeAll(int source[], int size, int element) {
    int idx = 0;
    for (int i = 0; i < size; ++i) {
        if (source[i] != element) {
            source[idx++] = source[i];
        }
    }
    while (idx < size) {
        source[idx++] = 0;
    }
}

// Function to check if array can be split into two parts with equal sum
bool canBalance(int source[], int size) {
    int totalSum = 0, leftSum = 0;
    for (int i = 0; i < size; ++i) {
        totalSum += source[i];
    }
    for (int i = 0; i < size; ++i) {
        leftSum += source[i];
        if (leftSum == totalSum - leftSum) {
            return true;
        }
    }
    return false;
}

// Function to generate array series
void arraySeries(int n) {
    int size = n * n;
    int result[size];
    for (int i = 0; i < size; ++i) {
        result[i] = 0;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            result[i * n + j] = i - j;
        }
    }
    for (int i = 0; i < size; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
}

// Function to find the maximum bunch count
int maxBunchCount(int source[], int size) {
    int maxCount = 0, currentCount = 1;
    for (int i = 1; i < size; ++i) {
        if (source[i] == source[i - 1]) {
            ++currentCount;
        } else {
            if (currentCount > maxCount) {
                maxCount = currentCount;
            }
            currentCount = 1;
        }
    }
    if (currentCount > maxCount) {
        maxCount = currentCount;
    }
    return maxCount;
}

// Function to check repetition of elements
bool hasSameRepetition(int source[], int size) {
    int freqMap[100] = {0}; // Assuming elements are in the range 0 to 99
    int repetitionCount[100] = {0}; // Same range assumption
    for (int i = 0; i < size; ++i) {
        ++freqMap[source[i]];
    }
    for (int i = 0; i < 100; ++i) {
        if (freqMap[i] > 0) {
            ++repetitionCount[freqMap[i]];
            if (repetitionCount[freqMap[i]] > 1) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int source1[] = {10, 20, 30, 40, 50, 60};
    int size1 = 6;
    shiftLeft(source1, size1, 3);
    for (int i = 0; i < size1; ++i) cout << source1[i] << " ";
    cout << endl;

    int source2[] = {10, 20, 30, 40, 50, 60};
    int size2 = 6;
    rotateLeft(source2, size2, 3);
    for (int i = 0; i < size2; ++i) cout << source2[i] << " ";
    cout << endl;

    int source3[] = {10, 20, 30, 40, 50, 60};
    int size3 = 6;
    shiftRight(source3, size3, 3);
    for (int i = 0; i < size3; ++i) cout << source3[i] << " ";
    cout << endl;

    int source4[] = {10, 20, 30, 40, 50, 60};
    int size4 = 6;
    rotateRight(source4, size4, 3);
    for (int i = 0; i < size4; ++i) cout << source4[i] << " ";
    cout << endl;

    int source5[] = {10, 20, 30, 40, 50, 0, 0};
    int size5 = 7;
    remove(source5, 5, 2);
    for (int i = 0; i < size5; ++i) cout << source5[i] << " ";
    cout << endl;

    int source6[] = {10, 2, 30, 2, 50, 2, 2, 0, 0};
    int size6 = 9;
    removeAll(source6, 7, 2);
    for (int i = 0; i < size6; ++i) cout << source6[i] << " ";
    cout << endl;

    int source7[] = {1, 1, 1, 2, 1};
    int size7 = 5;
    cout << (canBalance(source7, size7) ? "true" : "false") << endl;

    arraySeries(3);

    int source8[] = {1, 2, 2, 3, 4, 4, 4};
    int size8 = 7;
    cout << maxBunchCount(source8, size8) << endl;

    int source9[] = {4, 5, 6, 6, 4, 3, 6, 4};
    int size9 = 8;
    cout << (hasSameRepetition(source9, size9) ? "true" : "false") << endl;

    return 0;
}
