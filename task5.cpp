#include<iostream>
using namespace std;
main() {
    int arrsize = 12;
    int arr[arrsize] = { 4,2,4,3,3,3,1,1,2,2,1,1 };
    //int arr[arrsize] = { 2,2,2,2,1,1 };
    //int arr[arrsize] = { 1,1,1 };
    int j = 0;
    int pro = 1;
    int sum = 0;
    int product = 1;
    while (j < arrsize) {
        if (j % 3 != 0 || pro == 1) {
            pro = pro * arr[j];
            j++;
        }

        if (j % 3 == 0) {
            sum = sum + pro;
            pro = 1;
        }
    }

    cout << sum;
}