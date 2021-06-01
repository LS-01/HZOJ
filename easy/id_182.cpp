/*************************************************************************
	> File Name: id_182.cpp
	> Author: ls
	> Mail: 
	> Created Time: Tue 01 Jun 2021 09:08:33 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, max = 0, tmp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (tmp > max) max = tmp;
    }
    cout << max << endl;
    return 0;
}
