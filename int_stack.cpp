// IntStack.cpp
#include "int_stack.h"



void IntStack::push(int value) {
    Node * newNode = new Node;
    newNode->value = value;
    newNode->next = top;
    top = newNode;
    count++;
}
IntStack::IntStack(int firstValue) : top(nullptr), count(0) {
    push(firstValue);
}

IntStack::~IntStack() {
    // Walk the list and delete every node.
    while (top != nullptr) {
        Node* old = top;
        top = top->next;
        delete old;
    }
}

int IntStack::pop() {
    if(top != nullptr) {
        Node * newTop = top->next;
        int oldTopValue = top->value;
        delete top;
        top = newTop;
        count--;
        return oldTopValue;
    } else {
        return -1;
    }
    
}
int IntStack::peek() {
    if (top != nullptr) {
        return top->value;
    } else {
        return -1;
    }

}