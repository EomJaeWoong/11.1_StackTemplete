#include <iostream>
#include "Stack.h"

void main()
{
	CStack<int> Stack(1000);

	Stack.Push(1);
	Stack.Push(2);
	Stack.Push(3);
	Stack.Push(4);

	int i;
	Stack.Pop(&i);

	printf("%d\n", i);

	
	Stack.Pop(&i);
	printf("%d\n", i);

}