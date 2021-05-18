/*************************************************************************
	> File Name: id_161.cpp
	> Author: ls
	> Mail: 
	> Created Time: Tue 18 May 2021 09:26:41 AM CST
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;
    double sum = x;
    for (int i = 0; i < n; i++) {
        sum += sum * .06;
    }
    cout << fixed << setprecision(6) << sum << endl;
    return 0;
}
