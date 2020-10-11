/*************************************************************************
	> File Name: id_116.cpp
	> Author: ls
	> Mail: 
	> Created Time: Fri 09 Oct 2020 11:30:50 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b) {
        swap(&a, &b);
    }
    if (a < c) {
        swap(&a, &c);
    }
    if (a >= b + c) {
        cout << "illegal triangle";
    } else {
        int aa = a * a;
        int bc = b * b + c * c;
        if (bc > aa) {
            cout << "acute triangle";
        } else if (bc == aa) {
            cout << "right triangle";
        } else {
            cout << "obtuse triangle";
        }
    }
    cout << endl;
    return 0;
}
