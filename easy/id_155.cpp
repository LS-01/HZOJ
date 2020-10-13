/*************************************************************************
	> File Name: id_155.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 12 Oct 2020 10:38:49 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0, a = 3, i = 1;
    while (i <= n) {
        a = 2 * (i - 1) + a;
        cout << a << endl;
        i++;
        sum += a;
    }
    cout << sum << endl;
    return 0;
}
