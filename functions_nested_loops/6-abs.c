#include "main.h"

/**
* _abs
* @x: value
* Return: Absolute alue of integer
*/

int _abs(int x)
{
	int y;

	if (x < 0)
	{
		y = x * -1;
		return (y);
	}
	return (x);
}
