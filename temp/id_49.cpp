/*************************************************************************
	> File Name: id_49.cpp
	> Author: ls
	> Mail: 
	> Created Time: Wed 03 Feb 2021 12:24:57 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 100000
int dp[MAX_N + 5];

int main() {
    int V, n, v, w, s;
    cin >> V >> n;
    for (int i = 1; i <= n; i++) {
        cin >> v >> w >> s;
        for (int k = 0; k < s; k++) {
            for (int j = V; j >= v; j--) {
                dp[j] = max(dp[j], dp[j - v] + w);
            }
        }
    }
    cout << dp[V] << endl;
    return 0;
}
