/*************************************************************************
	> File Name: id_172.cpp
	> Author: ls
	> Mail: 
	> Created Time: Tue 18 May 2021 06:33:24 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int len = 10;
    string names[len];
    for (int i = 0; i < len; i++) {
        cin >> names[i];
    }
    for (int i = 0; i < len; i++) {
        int min = i;
        for (int j = i; j < len; j++) {
            if (names[j] < names[min]) min = j;
        }
        string t = names[min];
        names[min] = names[i];
        names[i] = t;
        cout << t << endl;
    }
    return 0;
}
