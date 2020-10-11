/*************************************************************************
	> File Name: id_111.cpp
	> Author: ls
	> Mail: 
	> Created Time: Sun 27 Sep 2020 09:26:32 PM CST
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    double x = 1.0;
    if (n <= 3) {
        x += 13;
        cout << x << endl;
    } else {
        x += (13 + (n - 3) * 2.3);
        cout << fixed << setprecision(1) << x << endl;
    }
    return 0;
}
