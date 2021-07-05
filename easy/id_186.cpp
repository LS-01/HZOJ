/*************************************************************************
	> File Name: id_186.cpp
	> Author: ls
	> Mail: 
	> Created Time: Tue 01 Jun 2021 09:25:43 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0, ind = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    while (ind < n) {
        ind += a[ind];
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
