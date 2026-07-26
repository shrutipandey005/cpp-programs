#include <iostream>
using namespace std;

int main() {
    string password;

    cout << "Enter password: ";
    cin >> password;

    if (password.length() >= 6) {
        cout << "Strong Password";
    } else {
        cout << "Weak Password";
    }

    return 0;
}
