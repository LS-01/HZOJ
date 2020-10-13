/*************************************************************************
	> File Name: id_206.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 12 Oct 2020 04:34:46 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    double s;
    double sums[m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0) {
                sums[j] = 0;
            }
            cin >> s;
            sums[j] += s;
        }
    }
    for (int i = 0; i < m; i++) {
        cout << sums[i] << endl;
    }
    return 0;
}
