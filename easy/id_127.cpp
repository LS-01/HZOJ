/*************************************************************************
	> File Name: id_127.cpp
	> Author: ls
	> Mail: 
	> Created Time: Sun 11 Oct 2020 03:00:28 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    double x;
    cin >> x >> n;
    while (n) {
        x = x * (1 + 0.06);
        n--;
    }
    cout << (int)x << endl;
    return 0;
}
