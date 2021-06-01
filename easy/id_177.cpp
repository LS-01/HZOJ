/*************************************************************************
	> File Name: id_177.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 31 May 2021 10:26:05 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    cout << s << endl;
    for (int i = 0; i < s.length() - 1; i++) {
        s = s.substr(s.length() - 2) + s.substr(0, s.length() - 2);
        cout << s << endl;
    }
    return 0;
}
