#include <iostream>
using namespace std;

int main() {
    string username = "admin";
    string password = "1234";

    string u, p;

    cout << "Enter username: ";
    cin >> u;

    cout << "Enter password: ";
    cin >> p;

    if (u == username && p == password) {
        cout << "Login Successful";
    } else {
        cout << "Invalid Login";
    }

    return 0;
}
