/*************************************************************************
	> File Name: id_168.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 12 Oct 2020 06:56:41 PM CST
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

void sort(int n, string *names) {
    for (int i = 0; i < n; i++) {
        int min = i;
        for (int j = i; j < n; j++) {
            if (strcmp(names[min].c_str(), names[j].c_str()) > 0) {
                min = j;
            }
        }
        string t = names[min];
        names[min] = names[i];
        names[i] = t;
    }
}

int main() {
    int n;
    cin >> n;
    string names[n];
    for (int i = 0; i < n; i++) {
        cin >> names[i];
        int j = 0;
        while (names[i][j] != '\0') {
            if (j == 0 && names[i][j] >= 'a' && names[i][j] <= 'z') {
                names[i][j] -= 32;
            }
            if (j > 0 && names[i][j] >= 'A' && names[i][j] <= 'Z') {
                names[i][j] += 32;
            }
            j++;
        }
    }
    sort(n, names);
    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }
    return 0;
}
