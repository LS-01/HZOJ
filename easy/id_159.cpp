/*************************************************************************
	> File Name: id_159.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 17 May 2021 11:58:59 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    int cnt = c - 'A' + 1;
    for (int i = 0; i < cnt; i++) {
        char o = c;
        for (int j = 0; j < 2 * cnt - i - 1; j++) {
            if (j < i) cout << " ";
            else cout << o;
            if (j >= cnt) o++;
            else if (j < cnt - 1) o--;
        }
        cout << endl;
    }

    return 0;
}
