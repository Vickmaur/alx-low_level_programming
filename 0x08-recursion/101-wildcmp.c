#include "main.h"

int strlen_no_wilds(char *str);
void iterate_wild(char **wildstr);
char *postfix_match(char *str, char *postfix);

/**
 * strlen_no_wilds - Returns the length of a s * tring
 * @str: The string to be measured
 * Return: The length
 */
int strlen_no_wilds(char *str)
{
	int len = 0, index = 0;

	if (*(str + index))
	{
		if (str != '*')
			len++;

		index++;
		len += strlen_no_wilds(str + index);
	}

	return (len);
}

/**
 * interate_wild - interates through a string  * located at the wildcard
 * @wildstring: The string to be interated thr * ough
 */
void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iterate_wild(wildstr);
	}
}

/**
 * postfix_match - Checks if a string str matc * hes the postix
 * @str: The string to be matched
 * @postfix: The postfix
 * Return:If postfix are identical - a pointer * to the null byte
 */
char *postfix_match(char *str, char *postfix)
{
	int str_len = strlen_no_wilds(str) - 1;
	int postfix_len = strlen_no_wilds(postfix) - 1;

	if (*postfix == '*')
		iterate_wild(&postfix);

	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(str, postfix));
	}

	return (postfix);
}

/**
 * wildcmp - Compares two strings considering  * wildcard characters
 * @s1: The first string to be compared
 * @s2: The second string to be compared
 * Return: If the strings can be considered id * entical - 1
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
