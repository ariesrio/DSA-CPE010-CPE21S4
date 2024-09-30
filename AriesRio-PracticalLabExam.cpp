#include <iostream>
#include <utility>

class Node {
public:
    char data;
    Node *next;
};

void printList(Node *head) {
    Node *current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl; // For a new line after printing the list
}

int main() {
    // Step 1
    Node *head = nullptr;
    Node *second = nullptr;
    Node *third = nullptr;
    Node *fourth = nullptr;
    Node *fifth = nullptr;
    Node *last = nullptr;

    // Step 2
    head = new Node;
    second = new Node;
    third = new Node;
    fourth = new Node;
    fifth = new Node;
    last = new Node;

    // Step 3
    head->data = 'A';
    head->next = second;
    second->data = 'B';
    second->next = third;
    third->data = 'C';
    third->next = fourth;
    fourth->data = 'D';
    fourth->next = fifth;
    fifth->data = 'E';
    fifth->next = last;

    // Step 4
    last->data = 'F';
    last->next = nullptr;

    // Print the linked list
    printList(head);
    return 0;
}
