/*************************************************************************
	> File Name: id_121.cpp
	> Author: ls
	> Mail: 
	> Created Time: Sun 11 Oct 2020 11:18:51 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    char a, b;
    cin >> a >> b;
    if (a == b) {
        cout << "TIE" << endl;
    } else {
        if ((a == 'O' && b == 'Y') || (a == 'Y' && b == 'H') || (a == 'H' && b == 'O')) {
            cout << "MING" << endl;
        } else {
            cout << "LI" << endl;
        }
    }
    return 0;
}
