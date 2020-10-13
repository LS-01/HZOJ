/*************************************************************************
	> File Name: id_205.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 12 Oct 2020 04:26:38 PM CST
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, m, h;
    cin >> n >> m;
    double heights[n];
    for (int i = 0; i < n; i++) {
        double sum = 0.0;
        for (int j = 0; j < m; j++) {
            cin >> h;
            sum += h;
        }
        heights[i] = sum / m;
    }
    for (int i = 0; i < n; i++) {
        cout << fixed << setprecision(6) << heights[i] << endl;
    }
    return 0;
}
