/*************************************************************************
	> File Name: id_204.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 12 Oct 2020 04:22:21 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i][i] << endl;
    }
    return 0;
}
