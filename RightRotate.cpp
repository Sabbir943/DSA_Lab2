// Function to right rotate an array by d positions
#include<iostream>
using namespace std;
void rightRotate(int arr[], int size, int d) {
    d %= size;  // Normalize d within the range [0, size)

    for (int i = 0; i < d; i++) {
        int temp = arr[size - 1];  // Store the last element

        // Shift all elements to the right
        for (int j = size - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }

        arr[0] = temp;  // Set the first element to the previously stored last element
    }
}
void LeftRotate(int arr[], int size, int d) {
    d %= size;  // Normalize d within the range [0, size)

    for (int i = 0; i < d; i++) {
        int temp = arr[0];  // Store the first element

        // Shift all elements to the right
        for (int j = 0; j <size-1; j++) {
            arr[j] = arr[j + 1];
        }

        arr[size-1] = temp;  // Set the first element to the previously stored last element
    }
}
int main()
{
    int arr[]={12,34,56,78,90};
    int arr1[]={12,34,56,78,90};
    int size=5;
    int d=3;
    rightRotate(arr,size,d);
    LeftRotate(arr1,size,d);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr1[i]<<" ";
    }
}