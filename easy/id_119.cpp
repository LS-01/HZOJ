/*************************************************************************
	> File Name: id_119.cpp
	> Author: ls
	> Mail: 
	> Created Time: Sat 10 Oct 2020 10:07:07 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int months[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int y, m, d;
    cin >> y >> m >> d;
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
        months[2] = 29;
    }
    if (d == 1) {
        if (m == 1) {
            cout << y - 1 << " " << 12 << " " <<  months[12] << endl;
        } else {
            cout << y << " " << m - 1 << " " << months[m - 1] << endl;
        }
    } else {
        cout << y << " " << m << " " << d - 1 << endl;
    }
    if (d == months[m]) {
        if (m == 12) {
            cout << y + 1 << " " << 1 << " " << 1 << endl;
        } else {
            cout << y << " " << m + 1 << " " << 1 << endl;
        }
    } else {
        cout << y << " " << m << " " << d + 1 << endl;
    }
    return 0;
}
