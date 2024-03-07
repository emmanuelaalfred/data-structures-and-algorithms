#include <stddef.h>

template <class T> class Node {
public:

	Node();
	Node(T& value);
	Node(T& value, Node<T>* next);

	T info;
	Node<T>* next;
};
template <class T> Node<T>::Node()
{
	this->next = NULL;
}
template <class T> Node<T>::Node(T& value)
{
	this->next = NULL;
	this->info = value;
}

template <class T> Node<T>::Node(T& value, Node<T>* next)
{
	this->next = next;
	this->info = value;
}