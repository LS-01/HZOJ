/*************************************************************************
	> File Name: id_69.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 21 Sep 2020 09:26:36 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int y, m, d;
    cin >> y >> m >> d;
    if (m < 1 || m > 12) {
        cout << "No" << endl;
    } else {
        if (m == 2) {
            if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
                month[m] = 29;
            }
        }
        if (d > 0 && d <= month[m]) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
