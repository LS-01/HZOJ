/*************************************************************************
	> File Name: id_125.cpp
	> Author: ls
	> Mail: 
	> Created Time: Sun 11 Oct 2020 12:13:28 PM CST
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int h, m, s, t;
    cin >> h >> m >> s >> t;
    int ht = t / 3600, mt = t % 3600 / 60, st = t % 3600 % 60;
    s += st;
    while (s >= 60) {
        s -= 60;
        mt++;
    }
    m += mt;
    while (m >= 60) {
        m -= 60;
        ht++;
    }
    h += ht;
    while (h >= 24) {
        h -= 24;
    }
    cout << (h % 12 == 0 ? 12 : h % 12) << ":" << m << ":" << s << (h > 11 ? "pm" : "am") << endl;
    cout << fixed << setprecision(2) << (t / 86400.0) * 100.0 << "%" << endl;
    return 0;
}
