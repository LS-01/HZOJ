/*************************************************************************
	> File Name: id_133.cpp
	> Author: ls
	> Mail: 
	> Created Time: Sun 11 Oct 2020 11:21:23 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            cout << i << "*" << j << "=" << i * j;
            if (j < n) {
                cout << '\t';
            }
        }
        cout << endl;
    }
    return 0;
}
