#include "Stack.h"
#include "List.h"
#include <string>
#include <iostream>

using namespace std;

int main() {

cout << "Prueba de funcionamiento de una lista enlazada simple" << endl;
cout << endl;
//Prueba de funcionamiento de una lista enlazada simple tipo string
List<string> list;

list.printElements(); // Imprime la lista vacia
cout << "El tamaño de la lista es: " << list.getSize() << endl; // Imprime el tamaño de la lista
list.addNodeToHead("Hola"); // Agrega un nodo al inicio de la lista
list.addNodeToTail("!"); // Agrega un nodo al final de la lista
list.addNodeAtPosition("Mundo", 1); // Agrega un nodo en la posicion 1 de la lista
cout << "El tamaño de la lista es: " << list.getSize() << endl; // Imprime el tamaño de la lista
list.printElements(); // Imprime la lista
list.deleteNodeAtPosition(0); // Elimina el nodo en la posición. En este caso, el head
cout << "El tamaño de la lista es: " << list.getSize() << endl; // Imprime el tamaño de la lista
list.addNodeToHead("Chao"); // Agrega un nodo al inicio de la lista
list.searchElement("Chao"); // Busca un elemento en la lista
list.printElements(); // Imprime la lista

cout << endl;
cout << endl;
cout << "======================================================================" << endl;
cout << "======================================================================" << endl;
cout << "======================================================================" << endl;
cout << "======================================================================" << endl;
cout << endl;
cout << endl;
cout << "Prueba de funcionamiento de una pila" << endl;
cout << endl;


//Prueba de funcionamiento de una pila tipo double
Stack<double> stack;

cout << "El tamaño de la pila es: " << stack.size() << endl; // Imprime el tamaño de la pila
cout << "¿El stack está vacío?: " << stack.isEmpty() << endl; // Imprime si el stack está vacío
stack.push(1.0); // Agrega un elemento a la pila
stack.push(2.0); // Agrega un elemento a la pila
stack.push(3.0); // Agrega un elemento a la pila
cout << "El tamaño de la pila es: " << stack.size() << endl; // Imprime el tamaño de la pila
stack.printElements(); // Imprime la pila
cout << "El top del stack es: " << stack.peek() << endl; // Imprime el elemento en la cima de la pila
stack.pop(); // Elimina el elemento en la cima de la pila
stack.printElements(); // Imprime la pila
cout << "El tamaño de la pila es: " << stack.size() << endl; // Imprime el tamaño de la pila
cout << "¿El stack está vacío?: " << stack.isEmpty() << endl; // Imprime si el stack está vacío
cout << "El top del stack es: " << stack.peek() << endl;





}