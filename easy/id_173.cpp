/*************************************************************************
	> File Name: id_173.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 12 Oct 2020 06:48:09 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    string s;
    int c_cou = 0, n_cou = 0, s_cou = 0, o_cou = 0;
    getline(cin, s);
    int i = 0;
    while (s[i] != '\0') {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            c_cou++;
        } else if (s[i] >= '0' && s[i] <= '9') {
            n_cou++;
        } else if (s[i] == ' ') {
            s_cou++;
        } else {
            o_cou++;
        }
        i++;
    }
    cout << c_cou << " " << n_cou << " " << s_cou << " " << o_cou << endl;
    return 0;
}
