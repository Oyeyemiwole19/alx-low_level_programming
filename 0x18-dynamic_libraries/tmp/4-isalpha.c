#include "main.h"
/**
 * _isalpha -> checks for alphabetic character
 * @c: is a character to be checked
 * Return: returns 0 or 1 depend on the condition
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
