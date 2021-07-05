/*************************************************************************
	> File Name: id_465.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 07 Jun 2021 04:23:11 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int digit(long long n, int k) {
    while (--k) {
        n /= 10;
    }
    return n % 10;
}

int main() {
    long long n, k;
    cin >> n >> k;
    cout << digit(n, k) << endl;
    return 0;
}
