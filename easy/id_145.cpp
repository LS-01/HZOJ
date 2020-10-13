/*************************************************************************
	> File Name: id_145.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 12 Oct 2020 02:44:02 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int max_len = 0, N;
    string name, max_name;
    cin >> N;
    while (N) {
        N--;
        cin >> name;
        if (name.length() > max_len) {
            max_len = name.length();
            max_name = name;
        }
    }
    cout << max_name << endl;
    return 0;
}
