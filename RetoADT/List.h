#ifndef LIST_H
#define LIST_H

#include "Node.h"

template <typename T>


class List{

    private:
        int size;
        Node<T>* head;
        Node<T>* tail;

    public:
        List(); //Constructor

        ~List(); //Destructor

        //Setters
        void addNodeToHead(const T element);
        void addNodeToTail(const T element);
        void addNodeAtPosition(const T element, int position);
        void deleteNodeAtPosition(int position);
        void deleteNodeHead();
        void deleteNodeTail();
        T getHead() const;

        //Getter
        int getSize() const;

        //Print
        void printElements() const;

        bool searchElement(const T element) const;
        int getPositionByValue(const T element) const; 
};

#endif