/*************************************************************************
	> File Name: id_178.cpp
	> Author: ls
	> Mail: 
	> Created Time: Tue 01 Jun 2021 08:39:07 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    string s = "";
    for (int i = 0; i < N; i++) {
        char c = 'A' + i;
        s = s + c + s;
    }
    cout << s << endl;
    return 0;
}
