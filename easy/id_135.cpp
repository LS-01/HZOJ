/*************************************************************************
	> File Name: id_135.cpp
	> Author: ls
	> Mail: 
	> Created Time: Sun 11 Oct 2020 11:29:58 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int months[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void year_judge(int y) {
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
        months[2] = 29;
    } else {
        months[2] = 28;
    }
}

int main() {
    int x, y, m, d;
    cin >> x >> y >> m >> d;
    year_judge(y);
    while (x) {
        x--;
        if (d == months[m]) {
            d = 1;
            if (m == 12) {
                m = 1;
                y++;
                year_judge(y);
            } else {
                m++;
            }
        } else {
            d++;
        }
    }
    cout << y << " " << m << " " << d << endl;
    return 0;
}
