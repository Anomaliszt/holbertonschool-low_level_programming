#include "function_pointers.h"

/**
* print_name - print the name with function pointer
* @name: name
* @f: function
* Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
