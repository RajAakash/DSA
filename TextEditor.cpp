// TextEditor.cpp
#include "TextEditor.h"
#include <iostream>

TextEditor::TextEditor() : text(""), operationStack() {}

void TextEditor::edit(const std::string& newText) {
    operationStack.push(text);  // Save the current state before editing
    text += newText;
}

void TextEditor::undo() {
    if (!operationStack.isEmpty()) {
        text = operationStack.pop();  // Revert to the previous state
    } else {
        std::cout << "Nothing to undo." << std::endl;
    }
}

void TextEditor::display() const {
    std::cout << "Text: " << text << std::endl;
}

void TextEditor::pushToStack() {
    operationStack.push(text);
}

void TextEditor::clearStack() {
    operationStack.clearStack();
}

