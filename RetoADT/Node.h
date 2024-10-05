#ifndef NODE_H
#define NODE_H

template <typename T>

class Node{

    private:
        T element; 
        Node<T>* next;

    public:
        Node(); // Default Constructor
        Node(const T value); //Constructor with parameters

        //Setters
        void setElement(const T value);
        void setNext(Node<T>* next);

        //Getters
        T getElement() const;
        Node<T>* getNext() const;
    
};

#endif