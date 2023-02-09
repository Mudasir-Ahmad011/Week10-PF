#include<iostream>
using namespace std;

bool isRepeatingCycle(int number, int size);
int arr[10];
main() {
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    arr[size];
    for (int i = 0;i < size;i++) {
        cout << "Enter the number: ";
        cin >> arr[i];
    }
    int number;
    cout << "Enter the number from where you want to check the cycle";
    cin >> number;
    bool checker = isRepeatingCycle(number, size);
    if (checker == 1) {
        cout << "true";
    }
    else {
        cout << "false";
    }
}
bool isRepeatingCycle(int number, int size) {
    int i = 0;

    bool isbool = false;
    if (number > size) {
        isbool = true;
    }
    else {
        int j = number;

        while (i < size) {
            if (i % number == 0) {
                int k = 0;

                while (k < number) {
                    if (j >= size) {
                        break;
                    }
                    if (arr[k] == arr[j]) {
                        isbool = true;
                    }
                    else {
                        isbool = false;
                        break;
                    }
                    k++;

                    j++;
                }
            }
            i++;
        }
    }
    return isbool;
}