/*************************************************************************
	> File Name: id_176.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 31 May 2021 09:47:52 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int ind = 0, cnt = 0;
    while (ind < s1.length()) {
        int ind_t = s1.substr(ind).find(s2);
        if (ind_t < ind) {
            break;
        }
        cnt++;
        ind += (ind_t + 1);
    }
    cout << cnt << endl;
    return 0;
}
