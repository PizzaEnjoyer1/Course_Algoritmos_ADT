#include <iostream>
#include "Stack.h"

using namespace std;

template <typename T>
Stack<T>::Stack(): list(new List<T>) {}

template <typename T>
Stack<T>::~Stack() {
    delete list; 
}

template <typename T>
void Stack<T>::push(const T element) {
    list->addNodeToHead(element); 
}

template <typename T>
void Stack<T>::pop() {
    if (isEmpty()) {
        cout << "Stack is empty, cannot pop." << endl;
        return;
    }
    list->deleteNodeHead();
}


template <typename T>
T Stack<T>::peek() const {
    return list->getHead();
}


template <typename T>
void Stack<T>::printElements() const {

    if(!isEmpty()){

        list->printElements();
        return;
    }

    else{
        cout << "Stack is empty" << endl;
    }
}

template <typename T>
bool Stack<T>::isEmpty() const {
    return list->getSize() == 0; 
}

template <typename T>
int Stack<T>::size() const {
    return list->getSize(); 
}


template class Stack<int>;
template class Stack<double>;
template class Stack<std::string>;
