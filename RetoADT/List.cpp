#include <iostream>
#include "List.h"

using namespace std;

template <typename T>

// Constructor
List<T>::List(): head(nullptr), tail(nullptr), size(0){};

template <typename T>
// Destructor
List<T>::~List(){
    Node<T>* temp;
    while(head != nullptr){
        temp = head;
        head = head->getNext();
        delete temp;
    }

    head = nullptr;
    tail = nullptr;
    size = 0;
}

template <typename T>
void List<T>::addNodeToHead(const T element){

    Node<T>* node = new Node<T>();

    if (head == nullptr){
        node -> setElement(element);
        head = tail = node;

    }
    else{
        node -> setElement(element);
        node -> setNext(head);
        head = node;
    }
    size++;
}

template <typename T>
void List<T>::deleteNodeHead(){

    if(head == nullptr){
        cout << "List<T> is empty :)" << endl;
        return;
    }

    else{
        Node<T>* temp = head;
        head = head -> getNext();
        delete temp;
    }

    size = size - 1;

}

template <typename T>
void List<T>::addNodeToTail(const T element){

    Node<T>* node = new Node<T>();

    if (tail == nullptr){
        node -> setElement(element);
        head = tail = node;

    }
    else{
        node -> setElement(element);
        tail -> setNext(node);
        tail = node;
    }

    size++;
}

template <typename T>
void List<T>::deleteNodeTail(){

    if (head == nullptr) {
        cout << "List<T> is empty :)" << endl;
        return;
    }
    if (head == tail) {
        delete head;
        head = tail = nullptr;
    }
    else {
        Node<T>* current = head;

        while(current->getNext() != tail){

          current = current->getNext();

        }
        
        delete tail;
        tail = current;
        tail->setNext(nullptr);
    }

size = size - 1;
}

template <typename T>
void List<T>::addNodeAtPosition(const T element, int position) {
    // Verificar si la posición es válida
    if (position < 0 || position > size) {
        cout << "Position out of bounds." << endl;
        return;
    }

    Node<T>* newNode = new Node<T>(element); // Crear el nuevo nodo

    if (position == 0) {
        // Si la posición es 0, agregar al inicio
        newNode->setNext(head);
        head = newNode;
        if (tail == nullptr) { // Si la List<T>a estaba vacía, el nuevo nodo es también el tail
            tail = newNode;
        }
    } else {
        Node<T>* current = head;
        // Recorrer hasta la posición anterior
        for (int i = 0; i < position - 1; i++) {
            current = current->getNext();
        }
        newNode->setNext(current->getNext());
        current->setNext(newNode);

        if (newNode->getNext() == nullptr) {
            // Si el nuevo nodo es el último, actualizar tail
            tail = newNode;
        }
    }

    size++; // Incrementar el tamaño de la List<T>a
}


template <typename T>
void List<T>::deleteNodeAtPosition(int position) {
    // Verificar si la posición es válida
    if (position < 0 || position >= size) {
        cout << "Position out of bounds." << endl;
        return;
    }

    if (position == 0) {
        // Si la posición es 0, eliminar el nodo en la cabeza
        deleteNodeHead();
    } else {
        Node<T>* current = head;

        // Recorrer hasta la posición anterior
        for (int i = 0; i < position - 1; i++) {
            current = current->getNext();
        }

        Node<T>* NodeToDelete = current->getNext(); // Nodo a eliminar

        if (NodeToDelete == tail) {
            // Si el nodo a eliminar es el tail, actualizar tail
            tail = current;
        }

        current->setNext(NodeToDelete->getNext()); // Eliminar el nodo de la List<T>a
        delete NodeToDelete; // Liberar memoria

        size--; // Decrementar el tamaño de la List<T>a
    }
}



template <typename T>
int List<T>::getSize() const{
    return size;
}

template <typename T>
T List<T>::getHead() const{
    if(head == nullptr){
        cout << "List<T> is empty" << endl;
        return T();
    }

    else{
        return head -> getElement();
    }
}


template <typename T>
void List<T>::printElements() const{

    Node<T>* temp = head;

    while(temp != nullptr){
        cout << "Element equal to: " << temp -> getElement() << endl;
        temp = temp -> getNext();
    }

    cout << "Print successful" << endl;
}


template <typename T>
bool List<T>::searchElement(const T element) const{

    Node<T>* current = head;

    while (current != nullptr) {
        if (current->getElement() == element) {
            cout << "Element " << element << " found at position: " << getPositionByValue(element) << endl;
            return true; // Element found
        }

        current = current->getNext();
    }

    return false; // Element not found
}


template <typename T>
int List<T>::getPositionByValue(const T element) const {

    Node<T>* current = head;
    int position = 0;

    while (current != nullptr) {
        if (current->getElement() == element) {
            return position; // Retorna la posición si se encuentra el elemento
        }
        current = current->getNext();
        position++;
    }
    
    return -1; // Retorna -1 si el elemento no se encuentra
}

// Explicit instantiation for common types
template class List<int>;
template class List<double>;
template class List<std::string>;
