// OperationStack.h
#ifndef OPERATIONSTACK_H
#define OPERATIONSTACK_H

#include <stack>
#include <string>

class OperationStack {
private:
    std::stack<std::string> undoStack;

public:
    // Push an operation onto the stack
    void push(const std::string& operation);

    // Pop the top operation from the stack
    std::string pop();

    // Clear the entire stack
    void clearStack();

    // Check if the stack is empty
    bool isEmpty() const;
};

#endif
