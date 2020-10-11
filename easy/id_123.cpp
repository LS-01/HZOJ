/*************************************************************************
	> File Name: id_123.cpp
	> Author: ls
	> Mail: 
	> Created Time: Sun 11 Oct 2020 11:41:48 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a <= c && b >= d) || (a >= c && b <= d)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
