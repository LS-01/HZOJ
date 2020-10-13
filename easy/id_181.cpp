/*************************************************************************
	> File Name: id_181.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 12 Oct 2020 06:08:08 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= 32;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
        i++;
    }
    cout << s << endl;
    return 0;
}
