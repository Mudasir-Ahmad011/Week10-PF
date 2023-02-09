#include<iostream>
using namespace std;
int checkCondition(string temp, char letter);
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

    int sum = 0;
    for (int i = 0;i < arrsize;i++) {
        string temp = arr[i];
        sum = sum + checkCondition(temp, letter);
    }
    if (sum != 0) {
        cout << letter << " Shows " << sum << " time in a array string";
    }
    else {
        cout << "Letter is not exist in our array";
    }

}
int checkCondition(string temp, char letter) {
    int j = 0;
    int count = 0;
    while (temp[j] != '\0') {
        if (letter == temp[j]) {
            count++;
        }
        j++;
    }
    return count;
}