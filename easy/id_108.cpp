/*************************************************************************
	> File Name: id_108.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 21 Sep 2020 11:58:05 PM CST
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char type;
    double m, n;
    cin >> type >> m >> n;
    double area = m * n;
    cout << fixed << setprecision(2) << (type == 'r' ? area : area / 2) << endl;
    return 0;
}
