/*************************************************************************
	> File Name: id_132.cpp
	> Author: ls
	> Mail: 
	> Created Time: Sun 11 Oct 2020 11:01:14 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, x;
    long long res = 1;
    cin >> n;
    while (n) {
        n--;
        cin >> x;
        res *= x;
    }
    cout << res << endl;
    return 0;
}
