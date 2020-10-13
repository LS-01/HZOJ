/*************************************************************************
	> File Name: id_152.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 12 Oct 2020 09:00:22 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    n += 3;
    n > 7 ? n -= 7 : n;
    switch (n) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
    }
    cout << endl;
    return 0;
}
