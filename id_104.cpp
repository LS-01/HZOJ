/*************************************************************************
	> File Name: id_104.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 21 Sep 2020 11:47:59 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    while (n) {
        if (n % 10 == 9) {
            cnt++;
            break;
        }
        n /= 10;
    }
    if (cnt) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
