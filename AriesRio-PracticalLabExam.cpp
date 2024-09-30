#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;
    Node* tail;

    LinkedList() : head(nullptr), tail(nullptr) {}

    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void display() {
        Node* current = head;
        cout << "Prime Numbers: ";
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << "\nHead: " << (head ? to_string(head->data) : "null");
        cout << "\nTail: " << (tail ? to_string(tail->data) : "null") << endl;
    }
};

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    LinkedList primeList;

    for (int i = 2; i < 20; ++i) {
        if (isPrime(i)) {
            primeList.insert(i);
        }
    }

    primeList.display();

    return 0;
}