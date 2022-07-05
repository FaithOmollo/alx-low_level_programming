#include "main.h"

/**
 *  is_palindrome_helper - helper function for finding a palindrome
 * @s: int, counter to start
 * @e: int, counter to end
 * @c: char, the string
 * Return: returns int boolean if palindrome or not
 */
int is_palindrome_helper(char *c, int s, int e)
{
	if (s == e)
		return (1);
	if (c[s] != c[e])
		return (0);
	if (s < e + 1)
		return (is_palindrome_helper(c, s + 1, e - 1));
	return (1);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: pointer to char, an array
 *
 * Return: returns in 1 if palindrome 0 if not
 */
int is_palindrome(char *s)
{
	int count = getLen(s);

	if (count == 0)
		return (1);
	return (is_palindrome_helper(s, 0, count - 1));
}

