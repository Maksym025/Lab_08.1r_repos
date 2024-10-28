#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int Count(char* str, int i, int len) {
    if (i + 4 >= len) 
        return 0;
    if (str[i] == 'w' && str[i + 1] == 'h' && str[i + 2] == 'i' && str[i + 3] == 'l' && str[i + 4] == 'e')
        return 1 + Count(str, i + 5, len); 
    else
        return Count(str, i + 1, len); 
}

char* Change(char* dest, const char* str, char* t, int i, int len) {
    if (i + 4 >= len) { 
        *t = '\0';
        return dest;
    }
    if (str[i] == 'w' && str[i + 1] == 'h' && str[i + 2] == 'i' && str[i + 3] == 'l' && str[i + 4] == 'e') {
        strcat(t, "***");
        return Change(dest, str, t + 3, i + 5, len); 
    }
    else {
        *t = str[i];
        return Change(dest, str, t + 1, i + 1, len);
    }
}

int main() {
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);
    int len = strlen(str);

    cout << "String contained " << Count(str, 0, len) << " groups of 'while'" << endl;

    char* dest = new char[len * 2 + 1];
    Change(dest, str, dest, 0, len);

    cout << "Modified string: " << dest << endl;

    delete[] dest;
    return 0;
}
