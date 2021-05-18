/*************************************************************************
	> File Name: id_160.cpp
	> Author: ls
	> Mail: 
	> Created Time: Tue 18 May 2021 09:13:01 AM CST
 ************************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#define PI 3.14

int main() {
    double r, h;
    cin >> r >> h;
    cout << fixed << setprecision(2) << (PI * r + 2 * r + 2 * r * sqrt(2)) * h + (PI * r * r + 2 * r * 2 * r) << endl;
    return 0;
}
