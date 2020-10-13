/*************************************************************************
	> File Name: id_443.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 12 Oct 2020 04:01:20 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int L, M, a, b;
    cin >> L >> M;
    int arr[L + 1];
    for (int i = 0; i < L + 1; i++) {
        arr[i] = 0;
    }
    for (int i = 0; i < M; i++) {
        cin >> a >> b;
        for (int j = a; j <= b; j++) {
            arr[j] = 1;
        }
    }
    int sum = 0;
    for (int i = 0; i < L + 1; i++) {
        if (!arr[i]) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}
