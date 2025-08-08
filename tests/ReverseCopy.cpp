//
// Created by Hitansh Paliwal on 08/08/25.
//
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    char c;
    fstream file1;
    fstream file2;
    file1.open("file1.txt", ios::in | ios::ate);
    file2.open("file2.txt", ios::out);
    if (file2.is_open()) {
        file2 << "Copying some items from file 1 to file 2 in reverse order: " << endl;
    }
    if (file1.is_open() && file2.is_open()) {
        streampos pos = file1.tellg();
        for (int i=1;i<=pos;i++) {
            file1.seekg(-i, ios::end);
            file1.get(c);
            file2 << c;
        }
    }
    file1.close();
    file2.close();
}