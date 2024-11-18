#include <iostream>
#include <fstream>
#include <Windows.h>
using namespace std;

 bool ContainsPair(fstream& f) {
    f.open("D:\\vs project\\11.1\\Contain.txt", ios::in);
    if (!f.is_open()) {
        cout << "Error opening file" << endl;
        exit(1);
    }

    char ch, prev = '\0';
    bool found = false;

    while (f.get(ch)) { 
        if ((prev == 'S' && ch == 'Q') || (prev == 'Q' && ch == 'S')) {
            found = true;
            break;
        }
        prev = ch;
    }

    f.close();
    return found;
}

void Print(fstream& f) {
    if (ContainsPair(f)) {
        cout << "The file contains the pair 'SQ' or 'QS'." << endl;
    }
    else {
        cout << "The file does not contain the pair 'SQ' or 'QS'." << endl;
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    fstream f;
    Print(f);

    return 0;
}
