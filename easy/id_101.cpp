/*************************************************************************
	> File Name: id_101.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 21 Sep 2020 11:32:51 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    while (n) {
        sum += (n % 10);
        n /= 10;
    }
    cout << sum << endl;
    return 0;
}
