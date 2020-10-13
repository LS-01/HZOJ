/*************************************************************************
	> File Name: id_446.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 12 Oct 2020 04:42:22 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

void print(int n) {
    for (int i = 0; i < n; i++) {
        int ii = i;
        if (ii > n / 2) {
            ii = n - ii - 1;
        }
        for (int j = 0; j < n; j++) {
            if (j >= ii && j < n - ii) {
                cout << ii + 1;
            } else {
                cout << (j >= n / 2 ? n - j : j + 1);
            }
            if (j < n - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    print(n);
    return 0;
}
