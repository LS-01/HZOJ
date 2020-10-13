/*************************************************************************
	> File Name: id_448.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 12 Oct 2020 03:57:09 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, num;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> num;
    for (int i = 0; i < n; i++) {
        if (num == arr[i]) {
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}
