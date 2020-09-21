/*************************************************************************
	> File Name: id_95.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 21 Sep 2020 11:14:49 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int reverse_n = 0;
    while (n) {
        reverse_n = reverse_n * 10 + n % 10;
        n /= 10;
    }
    cout << reverse_n << endl;
    return 0;
}
