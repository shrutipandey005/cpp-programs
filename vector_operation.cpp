#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;

    int n, value;

    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter element: ";
        cin >> value;
        numbers.push_back(value);
    }

    cout << "Vector elements: ";

    for (int x : numbers) {
        cout << x << " ";
    }

    cout << "\nVector size: " << numbers.size();

    return 0;
}
