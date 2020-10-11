/*************************************************************************
	> File Name: id_122.cpp
	> Author: ls
	> Mail: 
	> Created Time: Sun 11 Oct 2020 11:27:20 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

void print(int n) {
    if (n < 10) {
        cout << 0 << n;
    } else {
        cout << n;
    }
}

int main() {
    int t, h, m, s;
    cin >> t;
    h = t / 3600;
    m = t % 3600 / 60;
    s = t % 3600 % 60;
    print(h > 12 ? h - 12 : h);
    cout << ":";
    print(m);
    cout << ":";
    print(s);
    if (h < 12) {
        cout << " am";
    } else if (h == 12) {
        cout << " midnoon";
    } else {
        cout << " pm";
    }
    cout << endl;
    return 0;
}
