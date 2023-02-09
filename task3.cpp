#include<iostream>
using namespace std;
main() {
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int num[size];
    for (int i = 0;i < size;i++) {
        cout << "Enter the number: ";
        cin >> num[i];
    }
    int newarray[10];
    int i = 0;
    for (int j = 1;j < size - 1;j++) {
        if (num[j] > num[j - 1] && num[j] > num[j + 1]) {

            newarray[i] = num[j];
            i++;
        }
    }
    cout << "[";
    for (int c = 0;c < i;c++) {
        cout << newarray[c];
        if (c < i - 1) {
            cout << ",";
        }

    }
    cout << "]";
}