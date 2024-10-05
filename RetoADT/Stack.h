#ifndef STACK_H
#define STACK_H

#include "List.h"

#include <stdexcept>
#include <iostream>

/*
class StackEmpty : public std::runtime_error {

    public:
        StackEmpty(const std::strings err) : std::runtime_error(err) {}
};

class StackFull : public std::runtime_error {

    public:
        StackFull(const std::strings err) : std::runtime_error(err) {}
};
*/




template <typename T>

class Stack {
private:

    List<T>* list; // Usar la lista enlazada como base

public:
    Stack(); // Constructor
    ~Stack(); // Destructor

    void push(const T element); 
    void pop(); 
    void printElements() const;
    T peek() const;
    bool isEmpty() const; 
    int size() const; 
};

#endif
