/*************************************************************************
	> File Name: id_467.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 07 Jun 2021 04:13:03 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int m;
    long long res = 1;
    cin >> m;
    while (m) {
        res *= m--;
    }
    cout << res << endl;
    return 0;
}
