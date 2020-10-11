/*************************************************************************
	> File Name: id_120.cpp
	> Author: ls
	> Mail: 
	> Created Time: Sun 11 Oct 2020 12:05:41 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int months[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int y, m, d;
    cin >> y >> m >> d;
    if (m < 1 || m > 12) {
        cout << "NO" << endl;
    } else {
        if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
            months[2] = 29;
        }
        if (d < 1 || d > months[m]) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
