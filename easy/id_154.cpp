/*************************************************************************
	> File Name: id_154.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 12 Oct 2020 10:35:12 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = n; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            cout << j;
            if (j > 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
