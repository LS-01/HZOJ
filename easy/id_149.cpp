/*************************************************************************
	> File Name: id_149.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 12 Oct 2020 02:57:42 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int length = 0, i = s.length() - 1;
    while (i >= 0) {
        if (s[i] != ' ') {
            length++;
        } else {
            break;
        }
        i--;
    }
    cout << length << endl;
    return 0;
}
