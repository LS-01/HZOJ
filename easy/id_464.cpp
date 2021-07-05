/*************************************************************************
	> File Name: id_464.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 07 Jun 2021 04:49:35 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

bool judge(int n) {
    if (n % 100 == 0) {
        if (n % 400 == 0) return true;
    } else if (n % 4 == 0) {
        return true;
    }
    return false;
}

int main() {
    int x, y, cnt = 0;
    cin >> x >> y;
    for (int i = x; i <= y; i++) {
        if (judge(i)) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
