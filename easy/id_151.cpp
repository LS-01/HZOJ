/*************************************************************************
	> File Name: id_151.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 12 Oct 2020 03:28:46 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int win_judge(char c1, char c2) {
    if (c1 == c2) {
        return 0;
    }
    if ((c1 == 'O' && c2 == 'Y') || (c1 == 'H' && c2 == 'O') || (c1 == 'Y' && c2 == 'H')) {
        return 1;
    }
    return -1;
}

int main() {
    char ml, mr, hl, hr;
    cin >> ml >> mr >> hl >> hr;
    if (win_judge(ml, hl) > 0) {
        if (win_judge(ml, hr) >= 0) {
            cout << "MING";
        } else {
            if (win_judge(mr, hr) > 0) {
                cout << "MING";
            } else {
                cout << "LIHUA";
            }
        }
    } else if (win_judge(ml, hl) == 0) {
        if (win_judge(mr, hr) > 0) {
            cout << "MING";
        } else if (win_judge(mr, hr) == 0) {
            cout << "TIE";
        } else {
            cout << "LIHUA";
        }
    } else {
        if (win_judge(mr, hl) <= 0) {
            cout << "LIHUA";
        } else {
            if (win_judge(mr, hr) >= 0) {
                cout << "MING";
            } else {
                cout << "LIHUA";
            }
        }
    }
    cout << endl;
    return 0;
}
