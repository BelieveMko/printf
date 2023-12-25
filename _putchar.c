#include "main.h"

/**
  * _printchar - prints the char c to the standard ouput
  * @c: - variable holds the character to be printed
  *
  * Return: character to be printed
  */

int _printchar(char c)
{
	return (write(1, &c, 1));

}

