/*************************************************************************
	> File Name: id_109.cpp
	> Author: ls
	> Mail: 
	> Created Time: Tue 22 Sep 2020 12:01:34 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    while (n) {
        if (n % 10 % 2 == 0) {
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
