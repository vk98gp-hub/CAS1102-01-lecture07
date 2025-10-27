#include <iostream>


// TODO: Define a structure named "Node".
// It should hold a single character and a pointer to the next Node.
// Think of it as one link in a chain of characters.


// TODO: Implement the makeList function.
// It should start with empty head and tail pointers,
// then go through the given string to create and connect each Node in order.
void makeList(const char* s, Node*& head, Node*& tail) {

}

void printList(Node* head) {
    Node* cur = head;
    while (cur != nullptr) {
        std::cout << cur->ch;
        cur = cur->next;
    }
    std::cout << '\n';
}

int main() {
    Node* helloHead = nullptr;
    Node* helloTail = nullptr;
    makeList("Hello ", helloHead, helloTail);

    Node* nameHead = nullptr;
    Node* nameTail = nullptr;
    makeList("MyName", nameHead, nameTail); // You can freely change the input parameter as your name.


    // TODO: Connect the two linked lists so that printing them together
    // will display "Hello {yourName}" in one line.


    printList(helloHead);

    return 0;
}