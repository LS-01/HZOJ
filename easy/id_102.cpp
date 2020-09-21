/*************************************************************************
	> File Name: id_102.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 21 Sep 2020 11:34:45 PM CST
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b, c, t;
    cin >> a >> b >> c >> t;
    cout << fixed <<setprecision(2) << (1.0 - 1.0 * t / c) / (1.0 / a + 1.0 / b - 1.0 / c) << endl;
    return 0;
}
