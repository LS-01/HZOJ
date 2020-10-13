/*************************************************************************
	> File Name: id_147.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 12 Oct 2020 02:52:59 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    string num;
    cin >> num;
    if ((num[num.length() - 1] - '0') % 2 == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    cout << endl;
    return 0;
}
