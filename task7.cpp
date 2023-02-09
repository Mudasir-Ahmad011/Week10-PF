#include<iostream>
using namespace std;
void ReverseWords(string words);
main() {
    string sentence;
    cout << "Enter the sentence: ";
    getline(cin, sentence);
    ReverseWords(sentence);
}
void ReverseWords(string words) {
    int size = words.length();
    int i = size - 1;
    int k = 0;
    int j;
    while (true) {
        if (words[i] == ' ' || i == 0) {
            if (i == 0) {
                j = i;
            }
            else {
                j = i + 1;
            }

            for (k = j;words[k] != ' ' && k < size;k++) {
                cout << words[k];
            }
            cout << " ";
        }

        i--;
        if (i == -1) {
            break;
        }
    }
}