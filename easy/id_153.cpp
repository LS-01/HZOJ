/*************************************************************************
	> File Name: id_153.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 12 Oct 2020 10:24:47 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int y, m, d;
    cin >> y >> m >> d;
    if (m == 1 || m == 2) {
        m += 12;
        y--;
    }
    int j = y / 100;
    int k = y % 100;
    int h = (d + 26 * (m + 1) / 10 + k + k / 4 + j / 4 + 5 * j) % 7;
    if (h > 1) {
        cout << h - 1 << endl;
    } else {
        cout << h + 6 << endl;
    }
    return 0;
}
