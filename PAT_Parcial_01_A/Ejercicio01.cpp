#include "Ejercicio01.h"

Node<char>* Ejercicio01::remove(Node<char>* head) {
    if (head == nullptr) {
        return nullptr; 
    }

    Node<char>* current = head;

    for (current->next != nullptr) {
        if (current->value == current->next->value) {
  
            Node<char>* temp = current->next;
            current->next = temp->next;
            delete temp;
        }
        else {
            current = current->next;
        }
    }

    return head;
};
