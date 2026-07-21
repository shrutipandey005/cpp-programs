#include <iostream>
using namespace std;

int main() {
    int num, original, rev = 0;
    cin >> num;

    original = num;

    while (num > 0) {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    if (original == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
