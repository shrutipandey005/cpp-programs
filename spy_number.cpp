#include <iostream>
using namespace std;

int main() {
    int num, digit;
    int sum = 0, product = 1;

    cout << "Enter a number: ";
    cin >> num;

    while (num > 0) {
        digit = num % 10;
        sum += digit;
        product *= digit;
        num /= 10;
    }

    if (sum == product)
        cout << "Spy Number";
    else
        cout << "Not a Spy Number";

    return 0;
}
