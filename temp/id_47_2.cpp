/*************************************************************************
	> File Name: id_47.cpp
	> Author: ls
	> Mail: 
	> Created Time: Tue 02 Feb 2021 09:28:22 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_V 10000
int dp[MAX_V + 5];

int main() {
    int V, n, v, w;
    cin >> V >> n;
    for (int i = 1; i <= n; i++) {
        cin >> v >> w;
        for (int j = V; j >= v; j--) {
            dp[j] = max(dp[j], dp[j - v] + w);
        }
    }
    cout << dp[V] << endl;
    return 0;
}
