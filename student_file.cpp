#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("student.txt");

    string name;
    int age;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    file << name << " " << age;
    file.close();

    cout << "Saved to file";
    return 0;
}
