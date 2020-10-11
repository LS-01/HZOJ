/*************************************************************************
	> File Name: id_136.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 12 Oct 2020 12:15:44 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, temp = 7;
    cin >> n;
    for (int i = 1; temp <= n;) {
        cout << temp << endl;
        temp = 7 * (++i);
    }
    return 0;
}
