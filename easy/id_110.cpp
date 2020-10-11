/*************************************************************************
	> File Name: id_110.cpp
	> Author: ls
	> Mail: 
	> Created Time: Sun 27 Sep 2020 09:20:27 PM CST
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x, y;
    cin >> x;
    if (x <= 15) {
        y = x * 6;
    } else {
        y = 15 * 6 + (x - 15) * 9;
    }
    cout << fixed << setprecision(2) << y << endl;
    return 0;
}
