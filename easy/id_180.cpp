/*************************************************************************
	> File Name: id_180.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 31 May 2021 10:37:40 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    long long res = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        res *= 2;
    }
    cout << res << endl;
    return 0;
}
