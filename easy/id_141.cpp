/*************************************************************************
	> File Name: id_141.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 12 Oct 2020 12:20:14 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

void printCh(int n) {
    for (int i = 1; i <= 2 * n + 1; i++) {
        char c = 'A';
        int temp = i;
        if (i > n + 1) {
            temp = 2 * n - temp + 2;
        }
        for (int j = 0; j < 2 * n - temp + 2; j++) {
            if (j < temp - 1) {
                cout << " ";
            } else {
                cout << c;
            }
            if (j < n) {
                c++;
            } else {
                c--;
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    printCh(n);
    return 0;
}
