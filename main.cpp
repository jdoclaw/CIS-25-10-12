#include <iostream>
#include "int_stack.h"
using namespace std;

int main() {
    IntStack stack(5);

    stack.push(3);
    stack.push(9);
    int oldTop = stack.pop();
    cout << "The top was: " << oldTop << ", and is now: " << stack.peek() << endl;
    return 0;
}