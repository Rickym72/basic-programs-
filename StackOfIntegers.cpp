// Header 

#include "StackOfIntegers.h"


public:
	StackOfIntegers::StackOfIntegers()
	{
		bool StackOfIntegers::isEmpty() const;
		int StackOfIntegers::peek() const;
		void StackOfIntegers::push(int value);
		int StackOfIntegers::pop();
		int StackOfIntegers::getSize() const;
	}
private:
{
	int StackOfIntegers::elements[100];
	int StackOfIntegers::size;
}
};