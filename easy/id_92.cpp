/*************************************************************************
	> File Name: id_92.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 21 Sep 2020 11:05:38 PM CST
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 3.14;
    double r;
    cin >> r;
    cout << fixed << setprecision(2) << 2.0 * pi  * r << endl;
    cout << fixed << setprecision(2) << pi * r * r << endl;
    return 0;
}
