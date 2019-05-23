#include "stdafx.h"
#include "Stack.h"

Stack::Stack(int count)
{
	this->count = count;
	arr = new int[count];
}

Stack::Stack(Stack &&move)
{
	arr = move.arr;
	count = move.count;
	move.arr = nullptr;
}


Stack::~Stack()
{
	delete[] arr;
}

Stack::Stack(const Stack &other)
{
	arr = new int[other.count];
	count = other.count;
	for (int i = 0; i < count; ++i)
	{
		arr[i] = other.arr[i];
	}
}
Stack &Stack::operator=(const Stack &other)
{
	if (this == &other)
	{
		return *this;
	}
	delete[] arr;
	arr = new int[other.count];
	count = other.count;
	for (int i = 0; i < count; ++i)
	{
		arr[i] = other.arr[i];
	}
	return *this;
}

ostream &operator<<(ostream &stream, const Stack &value)
{
	for (int i = 0; i <= value.count; ++i)
		cout << value.arr[i] << " ";
	return stream;
}

int &Stack::operator[](int index)
{
	if (index < 0 || index > count)
		throw out_of_range("index was outside the array boundaries");
	return arr[index];
}


int Stack::GetSize()
{
	return count + 1;
}



int Stack::Pop()
{
	if (count <= 0) throw out_of_range("stack is empty");
	return arr[count--];
}

void Stack::Push(int value)
{
	arr[++count] = value;
}

int Stack::Peek()
{
	if (count <= 0) throw out_of_range("stack is empty");
	return arr[count] + 1;
}