#include<iostream>
using namespace std;
bool checkCondition(int pre, int current, int next);
main() {
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int num[size];
    for (int i = 0;i < size;i++) {
        cout << "Enter the number: ";
        cin >> num[i];
    }
    int outputarray[10];
    int count = 0;
    for (int idx = 1;idx < size - 1;idx++) {
        bool flag = checkCondition(num[idx - 1], num[idx], num[idx + 1]);
        if (flag == true) {
            outputarray[count] = num[idx];
            count++;
        }
    }
    cout << "[";
    for (int c = 0;c < count;c++) {
        cout << outputarray[c];
        if (c < count - 1) {
            cout << ",";
        }

    }
    cout << "]";
}
bool checkCondition(int pre, int current, int next) {
    bool isbool = false;
    if (pre<current && current>next) {
        isbool = true;
    }
    return isbool;
}