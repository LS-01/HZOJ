/*************************************************************************
	> File Name: id_128.cpp
	> Author: ls
	> Mail: 
	> Created Time: Sun 11 Oct 2020 10:49:51 PM CST
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, x, y, sum = 0;
    cin >> n;
    y = n;
    while (n) {
        cin >> x;
        sum += x;
        n--;
    }
    cout << fixed << setprecision(2) << (double)sum / y << endl;
    return 0;
}
