#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original, sum = 0;
    cin >> num;

    original = num;

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, 3);
        num /= 10;
    }

    if (sum == original)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong";

    return 0;
}
