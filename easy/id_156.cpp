/*************************************************************************
	> File Name: id_156.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 17 May 2021 08:37:01 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int judge_prime(int n) {
    for (int i = 2; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (i * j == n) {
                return 0;
            }
        }
    }
    return 1;
}

int judge_pow2(int n) {
    for (int i = 0; i * i <= n; i++) {
        if (i * i == n) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        int i1 = i / 1000;
        int i2 = i % 1000 / 100;
        int i3 = i % 100 / 10;
        int i4 = i % 10;
        if (judge_pow2(i1 * 10 + i2) && judge_pow2(i3 * 10 + i4) && judge_prime(i)) {
            cnt == 0 || cout << " ";
            cout << i;
            cnt++;
        }
    }
    cout << endl << cnt << endl;
    return 0;
}
