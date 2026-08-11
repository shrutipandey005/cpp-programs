#include <iostream>
using namespace std;

int main() {
    int num, octal = 0, place = 1;

    cout << "Enter decimal number: ";
    cin >> num;

    while (num > 0) {
        int rem = num % 8;
        octal += rem * place;
        place *= 10;
        num /= 8;
    }

    cout << "Octal = " << octal;

    return 0;
}
