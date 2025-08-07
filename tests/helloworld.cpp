#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int num;
    cin >> num;
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    cout << msg[num] << endl;
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}