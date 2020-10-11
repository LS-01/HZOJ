/*************************************************************************
	> File Name: id_130.cpp
	> Author: ls
	> Mail: 
	> Created Time: Sun 11 Oct 2020 10:55:24 PM CST
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    double x = 0;
    while (n) {
        x = (m + x) * (1 + 0.00417);
        n--;
    }
    cout << "$" << fixed << setprecision(2) << x << endl;
    return 0;
}
