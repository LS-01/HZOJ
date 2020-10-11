/*************************************************************************
	> File Name: id_129.cpp
	> Author: ls
	> Mail: 
	> Created Time: Sun 11 Oct 2020 10:52:53 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, x, min = -1;
    cin >> n;
    while (n) {
        cin >> x;
        if (min > x || min < 0) {
            min = x;
        }
        n--;
    }
    cout << min << endl;
    return 0;
}
