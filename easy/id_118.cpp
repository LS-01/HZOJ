/*************************************************************************
	> File Name: id_118.cpp
	> Author: ls
	> Mail: 
	> Created Time: Sat 10 Oct 2020 09:46:31 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    string names[] = {"rat", "ox", "tiger", "rabbit", "dragon", "snake", "horse", "sheep", "monkey", "rooster", "dog", "pig"};
    int year;
    cin >> year;
    cout << names[year >= 1900 ? (year - 1900) % 12 : (12 - (1900 - year) % 12)] << endl;
    return 0;
}
