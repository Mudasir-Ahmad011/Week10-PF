#include<iostream>
using namespace std;
main() {
    int week;
    cout << "Enter the number of weeks: ";
    cin >> week;
    int daymiles[week];

    for (int i = 0;i < week;i++) {
        cout << "Enter the number of miles you have run on saturday ";
        cin >> daymiles[i];
    }
    int count = 0;
    for (int j = 0;j < week - 1;j++) {
        if (daymiles[j] < daymiles[j + 1]) {
            count++;
        }
    }
    cout << count;
}