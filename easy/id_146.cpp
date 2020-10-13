/*************************************************************************
	> File Name: id_146.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 12 Oct 2020 02:48:53 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    string s;
    int i = 0;
    cin >> s;
    while (s[i] != '\0') {
        if ((s[i] >= 'a' && s[i] < 'z') || (s[i] >= 'A' && s[i] < 'Z')) {
            s[i]++;
        } else if (s[i] == 'z') {
            s[i] = 'a';
        } else if (s[i] == 'Z') {
            s[i] = 'A';
        }
        i++;
    }
    cout << s << endl;
    return 0;
}
