#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("data.txt");
    string line;
    int count = 0;

    while (getline(file, line)) {
        count++;
    }

    cout << "Total lines = " << count;

    file.close();
    return 0;
}
