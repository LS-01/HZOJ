/*************************************************************************
	> File Name: id_468.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 07 Jun 2021 04:01:10 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int res = 1;
    while (n % m != 0) {
        if (m > n) {
            swap(m, n);
        }
        res = n % m;
        n = m;
        m = res;
    }
    cout << m << endl;
    return 0;
}
