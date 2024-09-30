#include <iostream>
using namespace std;

// Define the Node class to represent each element in the linked list
class Node {
public:
    char data;        // Variable to store the data
    Node* next;     // Pointer to the next Node in the list
    
  
    Node(int data) {
        this->data = data;  // Set the data member
        this->next = nullptr; // Initialize next pointer to null
    }
};

int main() {
    // Create nodes with data
    Node* node1 = new Node('a');
    Node* node2 = new Node('b');
    Node* node3 = new Node('c');
    Node* node4 = new Node('d');
    Node* node5 = new Node('e');
    Node* node6 = new Node('f');
    
    // Link the nodes together to form a linked list
    node1->next = node2; 
    node2->next = node3; 
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;

    // Print the linked list
    Node* currentNode = node1; // Start with the head of the list
    while (currentNode) {
        cout << currentNode->data << " -> "; // Print current node's data
        currentNode = currentNode->next; // Move to the next node
    }
    cout << "null" << endl; // Indicate the end of the list

    // Cleanup: Deallocate memory for all nodes in the linked list
    currentNode = node1; // Reset currentNode to the head of the list
    while (currentNode) {
        Node* temp = currentNode; // Store the current node
        currentNode = currentNode->next; // Move to the next node
        delete temp;
           }

    return 0;
}
