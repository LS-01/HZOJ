/*************************************************************************
	> File Name: id_169.cpp
	> Author: ls
	> Mail: 
	> Created Time: Tue 18 May 2021 04:44:13 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int N;
    string password;
    int code[26] = {0};
    char c;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> c;
        cin >> code[c - 'A'];
    }
    cin >> password;
    int sum = 0;
    for (int i = 0; i < password.length(); i++) {
        if (password[i] >= 'A' && password[i] <= 'Z') {
            sum += code[password[i] - 'A'];
        }
    }
    cout << sum << endl;
    return 0;
}
