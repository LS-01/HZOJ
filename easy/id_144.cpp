/*************************************************************************
	> File Name: id_144.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 12 Oct 2020 02:38:57 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int i = 0, count = 0;
    while (s[i] != '\0') {
        if (s[i] == 'A') {
            count++;
        }
        i++;
    }
    cout << count << endl;
    return 0;
}
