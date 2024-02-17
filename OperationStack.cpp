// OperationStack.cpp
#include "OperationStack.h"

void OperationStack::push(const std::string& operation) {
    undoStack.push(operation);
}

std::string OperationStack::pop() {
    if (!undoStack.empty()) {
        std::string topOperation = undoStack.top();
        undoStack.pop();
        return topOperation;
    } else {
        return ""; // Return an empty string if the stack is empty
    }
}

void OperationStack::clearStack() {
    while (!undoStack.empty()) {
        undoStack.pop();
    }
}

bool OperationStack::isEmpty() const {
    return undoStack.empty();
}