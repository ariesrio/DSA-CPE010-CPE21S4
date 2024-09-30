#include <iostream>
using namespace std;

struct Node {
    int data;       
    Node* next;     // Pointer to the next node
    Node(int val) : data(val), next(nullptr) {} // Constructor
};

class LinkedList {
public:
    Node* head;     // first node
    Node* tail;     // last node

    LinkedList() : head(nullptr), tail(nullptr) {} //empty list

    // Function to insert a new value at the end of the list
    void insert(int val) {
        Node* newNode = new Node(val); // Create a new node
        if (!head) {
            head = tail = newNode; // If list is empty, set head and tail to new node
        } else {
            tail->next = newNode; // Link the current tail to the new node
            tail = newNode;       // Update the tail to the new node
        }
    }

    // prime numbers
    void display() {
        Node* current = head; // Start from the head
        cout << "Prime numbers: ";
        while (current) {
            cout << current->data << " "; // Print each node's data
            current = current->next; // Move to the next node
        }
        // Display head and tail values
        cout << "\nHead: " << (head ? head->data : 0);
        cout << "\nTail: " << (tail ? tail->data : 0) << endl;
    }
};

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false; // Numbers less than 2 are not prime
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false; // If divisible, it's not prime
    }
    return true; // Otherwise, it is prime
}

int main() {
    LinkedList primeList; // Create a linked list for prime numbers

    // Iterate through numbers less than 20
    for (int i = 2; i < 20; ++i) {
        if (isPrime(i)) {
            primeList.insert(i); // Insert prime numbers into the list
        }
    }

    primeList.display(); // Display the prime numbers, head, and tail
    return 0;
}


