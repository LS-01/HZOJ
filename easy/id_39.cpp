/*************************************************************************
	> File Name: id_39.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 21 Sep 2020 09:17:16 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int begin;
    int n;
    cin >> begin >> n;
    begin < 0 && (begin = 0);
    (begin & 1) && (begin++);
    for (int i = 0; i < n; i++, begin += 2) {
        cout << begin << endl;
    }
    return 0;
}
