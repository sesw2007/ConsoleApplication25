#include <string.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
#include <iostream>
#include <cstring>
void main() {



    const int dig = 10;
    char str[dig];
    cin >> str;
    cout << "Zaniato: " << strlen(str) << "\nSvobodno: " << dig - strlen(str) << std::endl;
    int m = strlen(str) + 1, n = strlen(str) + 1;
    while (m >= strlen(str) && n > strlen(str))
    cin >> m >> n;

    char* str1 = new char[n - m];
    int i, j = 0;
    for (i = m; i < n; i++) {
        cout << str[i];
        str1[j] = str[i];
        j++;
    }
    cout << std::endl << str1;
    delete[] str1;
}


