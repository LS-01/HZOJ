/*************************************************************************
	> File Name: id_70.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 21 Sep 2020 10:39:11 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int j = i;
        while (j % 2 == 0) {
            j /= 2;
        }
        while (j % 3 == 0) {
            j /= 3;
        }
        while (j % 5 == 0) {
            j /= 5;
        }
        if (j == 1) {
            cout << i << endl;
        }
    }
    return 0;
}
