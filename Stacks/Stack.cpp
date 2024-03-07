#include <stddef.h>
#include <iostream>
#include "Node.cpp"
using namespace std;


template <class T> class Stack {
public:
	bool IsEmpty() const;
	T Pop(T& value);
	void Push(T value);
	void MakeEmpty();
	void Print() const;
private:
	Node<T>* top;
};

template <class T> bool Stack <T>::IsEmpty() const {
	if (this->top == NULL)
		return true;
	else
		return false;
}

template <class T> void Stack <T>::Push(T value)
{
	Node<T>* node = new Node <T>(value, this->top);
	this->top = node;
}

template <class T> T Stack <T>::Pop(T& value)
{
	if (!IsEmpty())
	{
		Node<T>* temp = this->top;
		this->top = this->top->next;
		value = temp.info;
		delete temp;
	}
}

template <class T> void Stack <T>::MakeEmpty()
{
	while (!IsEmpty())
	{
		Node<T>* temp = this->top;
		this->top = this->top->next;
		delete temp;
	}
}

template <class T> void Stack <T>::Print() const
{
	Node<T>* temp = this->top;
	while (temp != NULL)
	{
		cout << temp->info << " ";
		temp = temp->next;
	}
	cout << endl;
}
