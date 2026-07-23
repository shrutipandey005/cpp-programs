#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    cin >> num;

    while (num > 0) {
        count++;
        num /= 10;
    }

    cout << "Digits = " << count;
    return 0;
}
