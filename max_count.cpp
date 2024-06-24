#include <iostream>
using namespace std;
void Max_Bunch_Count(int arr[], int size) {
    if (size == 0) {
        cout << 0 << endl;
        return;
    }

    int max_count = 1, current_count = 1;

    for (int i = 1; i < size; ++i) {
        if (arr[i] == arr[i - 1]) {
            current_count++;
        } else {
            current_count = 1;
        }
        if (current_count > max_count) {
            max_count = current_count;
        }
    }

    cout << max_count << endl;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 4};
    Max_Bunch_Count(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}
