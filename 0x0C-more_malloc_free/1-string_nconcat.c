#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat -  concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: first n bytes of s2
 * Return: s1, followed by the first n bytes of s2, and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int l1, l2, lt, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (l1 = 0; *(s1 + l1) != '\0'; l1++)
		;
	for (l2 = 0; *(s2 + l2) != '\0'; l2++)
		;
	if (n > l2)
		n = l2;
	lt = l1 + n;
	sout = malloc(lt + 1);

	if (sout == NULL)
		return (NULL);

	for (i = 0; i < lt; i++)
	{
		if (i < l1)
			sout[i] = s1[i];
		else
			sout[i] = s2[i - l1];
	}
	sout[i] = '\0';
	return (sout);
}
