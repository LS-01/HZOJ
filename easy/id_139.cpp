/*************************************************************************
	> File Name: id_139.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 12 Oct 2020 09:01:45 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i++) {
        int temp = i;
        if (i > n) {
            temp = 2 * n - i;
        }
        for (int j = 0; j < n + temp; j++) {
            if (j < n - temp) {
                cout << " ";
            } else {
                cout << "A";
            }
        }
        cout << endl;
    }
    return 0;
}
