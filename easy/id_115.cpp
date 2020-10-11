/*************************************************************************
	> File Name: id_115.cpp
	> Author: ls
	> Mail: 
	> Created Time: Thu 08 Oct 2020 07:05:46 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if (x == y) {
        cout << 100 << endl;
    } else {
        int x1 = x % 10;
        int x2 = x / 10;
        int y1 = y % 10;
        int y2 = y / 10;
        if (x1 == y2 && x2 == y1) {
            cout << 20 << endl;
        } else if (x1 == y1 || x1 == y2 || x2 == y1 || x2 == y2) {
            cout << 2 << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}
