/*************************************************************************
	> File Name: id_107.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 21 Sep 2020 11:55:51 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 7 == 0 && n % 2 != 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
