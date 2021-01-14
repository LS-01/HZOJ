/*************************************************************************
	> File Name: id_45.cpp
	> Author: ls
	> Mail: 
	> Created Time: Thu 07 Jan 2021 05:51:08 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 1000
char s[2][MAX_N + 5];
string s1, s2;
int dp[MAX_N + 5][MAX_N + 5] = {0};

int main() {
    cin >> s1 >> s2;
    for (int i = 0; i <= s1.size(); i++) {
        for (int j = 1; j <= s2.size(); j++) {
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
            }
        }
    }
    cout << dp[s1.size()][s2.size()] << endl;
    return 0;
}
