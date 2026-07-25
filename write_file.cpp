#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("data.txt");

    file << "Hello, this is my first file.";
    file.close();

    cout << "Data written to file";
    return 0;
}
