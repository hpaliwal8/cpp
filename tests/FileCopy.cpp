//
// Created by Hitansh Paliwal on 08/08/25.
//

#include <fstream>
#include <iostream>

using namespace std;

int main() {
    string line;
    fstream file1;
    fstream file2;
    file1.open("file1.txt", ios::in);
    file2.open("file2.txt", ios::app | ios::out );
    if (file2.is_open()) {
        file2 << "Copying some items from file 1 to file 2 now: " << endl;
    }
    if (file1.is_open() && file2.is_open()) {
        while (getline(file1, line)) {
            file2 << line << endl;
        }
    }
    file1.close();
    file2.close();
}