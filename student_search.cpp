#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("students.txt");

    string name, search;
    int age;

    cout << "Enter name to search: ";
    cin >> search;

    while (file >> name >> age) {
        if (name == search) {
            cout << "Found: " << name << " " << age;
            return 0;
        }
    }

    cout << "Student not found";
    file.close();
    return 0;
}
