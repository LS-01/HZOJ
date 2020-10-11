/*************************************************************************
	> File Name: id_134.cpp
	> Author: ls
	> Mail: 
	> Created Time: Sun 11 Oct 2020 11:24:24 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int min = a / 11;
    int max = b / 11;
    if (min * 11 < a) {
        min++;
    }
    while (min <= max) {
        cout << min * 11;
        if (min < max) {
            cout << " ";
        }
        min++;
    }
    cout << endl;
    return 0;
}
