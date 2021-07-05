/*************************************************************************
	> File Name: id_187.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 07 Jun 2021 06:19:21 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long cnt[n + 5], lost[n + 5];
    cnt[0] = 0;
    lost[0] = 0;
    for (int i = 1; i <= n; i++) {
        cnt[i] = 2 * cnt[i - 1] + 1;
        lost[i] = 2 * lost[i - 1] + i;
    }
    cout << cnt[n] << " " << lost[n] << endl;
    return 0;
}
