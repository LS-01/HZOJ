/*************************************************************************
	> File Name: id_163.cpp
	> Author: ls
	> Mail: 
	> Created Time: Tue 18 May 2021 09:42:41 AM CST
 ************************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a, b, angle;
    cin >> a >> b >> angle;
    cout << fixed << setprecision(6) << sqrt(a * a + b * b - 2 * a * b * cos(angle * 2 * M_PI / 360)) << endl;
    return 0;
}
