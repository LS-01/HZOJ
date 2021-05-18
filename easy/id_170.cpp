/*************************************************************************
	> File Name: id_170.cpp
	> Author: ls
	> Mail: 
	> Created Time: Tue 18 May 2021 05:07:01 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    string sign;
    for (int i = 0; i < N; i++) {
        cin >> sign;
        int ind;
        while ((ind = sign.find("Ban_smoking")) > -1) {
            sign.replace(ind, 11, "No_smoking");
        }
        cout << sign << endl;
    }
    return 0;
}
