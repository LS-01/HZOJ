/*************************************************************************
	> File Name: id_158.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 17 May 2021 11:47:48 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 2 * n + 1;
    for (int i = 0; i < cnt; i++) {
        for (int j = 0; j < cnt; j++) {
            int k = n - i;
            if (i > n) k = i - n;
            if (j == i || j == cnt - i - 1) cout << k;
            else if ((i < n && j > cnt - i - 1) || (i >= n && j > i)) break;
            else cout << " ";
        }
        cout << endl;
    }
    return 0;
}
