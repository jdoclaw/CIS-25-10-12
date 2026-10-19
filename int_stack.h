// IntStack.h
#ifndef INT_STACK_H
#define INT_STACK_H
#include "Node.h"

class IntStack {
    private:
        Node * top;
        int count;
    public:
        IntStack(int firstValue);
        ~IntStack();
        void push(int value);
        int pop();
        int peek();
};

#endif