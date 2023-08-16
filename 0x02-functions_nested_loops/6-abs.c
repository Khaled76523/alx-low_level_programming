#include "main.h"
/**
 * _abs - computes the absloute value
 * of an integer.
 *
 * @i: input number as integer.
 *
 * Return: absloute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
