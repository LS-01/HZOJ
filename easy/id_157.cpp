/*************************************************************************
	> File Name: id_157.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 17 May 2021 11:30:32 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < 2 * n - 1; i++) {
        char c = 'A';
        for (int j = 0; j < 2 * n - 1; j++) {
            int k = i;
            if (k >= n) k = 2 * n - 2 - i;
            if (j > k - 1 && j < 2 * n - 1 - k) cout << c;
            else if (j >= 2 * n - 1 - k) break;
            else cout << " ";
            if (j < n - 1) c++;
            else c--;
        }
        cout << endl;
    }
    return 0;
}
