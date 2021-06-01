/*************************************************************************
	> File Name: id_184.cpp
	> Author: ls
	> Mail: 
	> Created Time: Tue 01 Jun 2021 09:18:27 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, cnt = 1;
    cin >> n;
    for (int i = 1; i < n; i++) {
        cnt = (cnt + 1) << 1;
    }
    cout << cnt << endl;
    return 0;
}
