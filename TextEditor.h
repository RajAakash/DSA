// TextEditor.h
#ifndef TEXTEDITOR_H
#define TEXTEDITOR_H

#include <string>
#include "OperationStack.h"

class TextEditor {
private:
    std::string text;
    OperationStack operationStack;

public:
    // Constructor
    TextEditor();

    // Perform a text editing operation
    void edit(const std::string& newText);

    // Undo the last text editing operation
    void undo();

    // Display the current state of the text
    void display() const;

    // Push the current state onto the stack
    void pushToStack();

    // Clear the entire stack
    void clearStack();
};

#endif