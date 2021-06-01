/*************************************************************************
	> File Name: id_183.cpp
	> Author: ls
	> Mail: 
	> Created Time: Tue 01 Jun 2021 09:10:47 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int f(int x) {
    if (x <= 0) return 0;
    if (x == 1) return 1;
    if (x % 2 == 0) {
        return 3 * f(x / 2) - 1;
    } else {
        return 3 * f((x + 1) / 2) - 1;
    }
}

int main() {
    int x;
    cin >> x;
    cout << f(x) << endl;
    return 0;
}
