/*************************************************************************
	> File Name: id_380.cpp
	> Author: ls
	> Mail: 
	> Created Time: Fri 12 Mar 2021 05:33:21 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int n, num[1005];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    sort(num, num + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }
    cout << endl;
    return 0;
}
