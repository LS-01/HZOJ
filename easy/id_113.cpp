/*************************************************************************
	> File Name: id_113.cpp
	> Author: ls
	> Mail: 
	> Created Time: Sun 27 Sep 2020 09:37:01 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int y, m;
    cin >> y >> m;
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
        month[2] = 29;
    }
    cout << month[m] << endl;
    return 0;
}
