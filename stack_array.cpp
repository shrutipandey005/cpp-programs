#include <iostream>
using namespace std;

int stack[5], top = -1;

void push(int x) {
    if(top == 4) {
        cout << "Overflow\n";
        return;
    }
    stack[++top] = x;
}

void pop() {
    if(top == -1) {
        cout << "Underflow\n";
        return;
    }
    top--;
}

void display() {
    for(int i = top; i >= 0; i--)
        cout << stack[i] << " ";
    cout << endl;
}

int main() {
    push(10);
    push(20);
    push(30);

    display();

    pop();
    display();

    return 0;
}
