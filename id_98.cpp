/*************************************************************************
	> File Name: id_98.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 21 Sep 2020 11:22:25 PM CST
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double r, h;
    cin >> r >> h;
    double pi = 3.14;
    double area = r * r * pi;
    cout << fixed << setprecision(2) << area << endl;
    cout << fixed << setprecision(2) << area * h << endl;
    return 0;
}
