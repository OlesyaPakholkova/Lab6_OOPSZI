#pragma once
#include <iostream>
#include <stdexcept>
#include "AbstractStack.h"
using namespace std;

class Stack : AbstractStack 
{
public:
	Stack(int count);
	Stack(const Stack &other);
	Stack(Stack &&other);
	Stack &operator=(const Stack &other);
	~Stack();
	int &operator[](int index);
	friend ostream& operator<<(ostream& stream, const Stack& value);

private:
	int *arr;
	int count, capacity;
};