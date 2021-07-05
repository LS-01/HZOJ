/*************************************************************************
	> File Name: id_188.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 07 Jun 2021 07:00:21 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int judge(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 1;
    }
    return 0;
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = m; i <= n; i++) {
        if (judge(i)) continue;
        cout << i++ << endl;
    }
    return 0;
}
