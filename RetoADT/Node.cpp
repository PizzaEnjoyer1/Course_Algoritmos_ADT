#include <iostream>
#include "Node.h"
using namespace std;


template <typename T>
Node<T>::Node(){
    element = T();
    this -> next = nullptr;
}

template <typename T>
Node<T>::Node(const T value){
    this -> element = value;
    this -> next = nullptr;
}

template <typename T>
T Node<T>::getElement() const{
    return element;
}

template <typename T>
Node<T>* Node<T>::getNext() const{
    return next;
}

template <typename T>
void Node<T>::setElement(const T value){
    element = value;
}

template <typename T>
void Node<T>::setNext(Node<T>* reference){
    next = reference;
}

template class Node<int>;
template class Node<double>;
template class Node<std::string>;