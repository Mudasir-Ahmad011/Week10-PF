#include<iostream>
using namespace std;
main() {
    int arrsize = 10;
    int arr[arrsize] = { 120,45,78,23,56,89,34,67,101,243 };
    int smallest = arr[0];
    int j = 0;
    int k = 0;
    while (j < arrsize) {
        int i = j;
        int smallest = arr[i];
        while (i < arrsize) {
            if (arr[i] < smallest) {
                smallest = arr[i];
                k = i;
            }
            i++;
        }
        if (j < arrsize - 1) {
            arr[k] = arr[j];

        }
        arr[j] = smallest;


        j++;
    }
    for (int k = 0;k < arrsize;k++) {
        cout << arr[k] << " ";
    }
}