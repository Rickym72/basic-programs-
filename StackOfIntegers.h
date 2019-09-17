#include <iostream>
#include <string>

using namespace std;

#ifndef StackOfIntegers_H
#define StackOfIntegers_H

class StackOfIntegers
{
public:
	StackOfIntegers();
	bool isEmpty() const;
	int peek() const;
	void push(int value);
	int pop();
	int getSize() const;

private:
	int elements[100];
	int size;
};

#endif