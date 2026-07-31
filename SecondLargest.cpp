#include <iostream>
using namespace std;

int main() {
    int arr[5], largest, second;

    cout << "Enter 5 numbers:\n";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    largest = second = -9999;

    for (int i = 0; i < 5; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    cout << "Second Largest = " << second;

    return 0;
}
