
#include <iostream>
#include <cstring>
using namespace std;

int strlen_new(char* cptr) {
    int i = 0, len = 0;

    while (*(cptr+i) != '\0') {
        len++;
        i++;
    }
    return len;
}
int main()
{
    char cstring[10];
    cout << "Insert a word" << endl;
    cin >> cstring;
    cout << cstring << endl;

    
    cout << "Length of string -->"<< strlen_new(cstring);
    return 0;
}

