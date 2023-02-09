#include<iostream>
using namespace std;
main() {
    int arrsize;
    char letter;
    cout << "Enter the size of array: ";
    cin >> arrsize;
    string arr[arrsize];

    for (int i = 0;i < arrsize;i++) {
        cout << "Enter word " << i + 1 << ":";
        cin >> arr[i];
    }
    cout << "Enter the letter you want to count: ";
    cin >> letter;

    int count = 0;
    for (int i = 0;i < arrsize;i++) {
        int j = 0;
        while (arr[i][j] != '\0') {
            if (letter == arr[i][j]) {
                count++;
            }
            j++;
        }
    }
    if (count != 0) {
        cout << letter << " Shows " << count << " time in a array string";
    }
    else {
        cout << "Letter is not exist in our array";
    }
}