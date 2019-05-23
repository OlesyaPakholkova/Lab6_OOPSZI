#pragma once

class AbstractStack
{
public:
	virtual int GetSize();
	virtual void Push(int value);
	virtual int Pop();
	virtual int Peek();
};