/*************************************************************************
	> File Name: id_165.cpp
	> Author: ls
	> Mail: 
	> Created Time: Tue 18 May 2021 10:11:19 AM CST
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long c;
    cin >> c;
    int cnt = 0;
    long long target = c * c;
    for (long i = 1; i < c; i++) {
        long long res = target - i * i;
        long long res_sqrt = sqrt(res);
        if (res_sqrt >= i && res_sqrt * res_sqrt == res) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
