/*************************************************************************
	> File Name: id_150.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 12 Oct 2020 03:12:57 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int array[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> array[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = n - 1; j >= 0; j--) {
            cout << array[j][i];
            if (j > 0) {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
