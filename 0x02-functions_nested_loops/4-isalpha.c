#include "main.h"
/**
 * isalpha -> checks for alphabetic character
 * and c as argument
 * Return: returns 0 or 1 depend on the condition
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
