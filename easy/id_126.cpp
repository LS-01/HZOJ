/*************************************************************************
	> File Name: id_126.cpp
	> Author: ls
	> Mail: 
	> Created Time: Sun 11 Oct 2020 01:37:20 PM CST
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

#define PI 3.14

int main() {
    double r1, r2;
    cin >> r1 >> r2;
    cout << fixed << setprecision(2) << PI * (r1 * r1 - r2 * r2) << endl;
    return 0;
}
