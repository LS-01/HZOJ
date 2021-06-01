/*************************************************************************
	> File Name: id_174.cpp
	> Author: ls
	> Mail: 
	> Created Time: Tue 18 May 2021 10:26:36 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    string s;
    string res = "";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            res += "%20";
        } else {
            res += s[i];
        }
    }
    cout << res << endl;
    return 0;
}
