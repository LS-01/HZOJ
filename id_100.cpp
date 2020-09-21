/*************************************************************************
	> File Name: id_100.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 21 Sep 2020 11:28:08 PM CST
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    double mon = 0.00417;
    double sum = 0;
    for (int i = 0; i < 6; i++) {
        sum = (sum + n) * (1 + mon);
    }
    cout << "$" << fixed << setprecision(2) << sum << endl;
    return 0;
}
