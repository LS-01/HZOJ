/*************************************************************************
	> File Name: id_124.cpp
	> Author: ls
	> Mail: 
	> Created Time: Sun 11 Oct 2020 11:45:26 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((b <= 50 || a >= 1) && (c <= 25 || d >= 5)) {
        cout << "ok";
    } else {
        cout << "pass";
    }
    cout << endl;
    return 0;
}
