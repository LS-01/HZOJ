/*************************************************************************
	> File Name: id_140.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 12 Oct 2020 12:11:51 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

void printChara(int n) {
    char c = 'A' - 1;
    for (int i = 1; i < 2 * n; i++) {
        int temp = i;
        if (i <= n) {
            c++;
        } else {
            c--;
            temp = 2 * n - temp;
        }
        for (int j = 0; j < n + temp - 1; j++) {
            if (j < n - temp) {
                cout << " ";
            } else {
                cout << c;
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    printChara(n);
    return 0;
}
