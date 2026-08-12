#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node();
    head->data = 20;
    head->next = nullptr;

    Node* newNode = new Node();

    cout << "Enter value: ";
    cin >> newNode->data;

    newNode->next = head;
    head = newNode;

    cout << "Updated Linked List: ";

    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
