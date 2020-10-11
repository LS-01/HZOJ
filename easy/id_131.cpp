/*************************************************************************
	> File Name: id_131.cpp
	> Author: ls
	> Mail: 
	> Created Time: Sun 11 Oct 2020 10:59:04 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, x, max = -1, min = -1;
    cin >> n;
    while (n) {
        n--;
        cin >> x;
        if (max < x || max < 0) {
            max = x;
        }
        if (min > x || min < 0) {
            min = x;
        }
    }
    cout << max - min << endl;
    return 0;
}
