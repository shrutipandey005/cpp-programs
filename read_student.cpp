#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("student.txt");

    string name;
    int age;

    file >> name >> age;

    cout << "Name: " << name << endl;
    cout << "Age: " << age;

    file.close();
    return 0;
}
