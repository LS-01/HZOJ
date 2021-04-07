/*************************************************************************
	> File Name: id_48.cpp
	> Author: ls
	> Mail: 
	> Created Time: Wed 03 Feb 2021 12:18:01 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 10000
int dp[MAX_N + 5];


int main() {
    int V, n, v, w;
    cin >> n >> V;
    for (int i = 1; i <= n; i++) {
        cin >> v >> w;
        for (int j = v; j <= V; j++) {
            dp[j] = max(dp[j], dp[j - v] + w);
        }
    }
    cout << dp[v] << endl;
    return 0;
}
