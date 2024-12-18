#include <iostream>

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* newNode = new Node;
    newNode->data = 10;
    newNode->next = nullptr; 

    std::cout << "Node data: " << newNode->data << std::endl;
    newNode->data = 20;

    delete newNode;

    return 0;
}