/*************************************************************************
	> File Name: id_466.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 07 Jun 2021 04:16:12 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

bool judge(int m) {
    int tmp = m, res = 0;
    while (tmp) {
        res = res * 10 + tmp % 10;
        tmp /= 10;
    }
    return res == m;
}

int main() {
    int n, cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (judge(i)) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
