#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - used to con concatenates two string
 * @s1: first sting
 * @s2: second string
 * @n: size of the string memory needed
 * Return: conCat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;

	unsigned int len2 = 0;

	unsigned int totalLen = (len1 < n) ? (len1 + n) : (len1 + len2);

	char *conCat = (char *)malloc((totalLen + 1) * sizeof(char));
	unsigned int i, j;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";

		s2 = "";
	}
	if (s1 != NULL)
		while (s1[len1] != '\0')
		{
			len1++;
		}
	if (s2 != NULL)
		while (s2[len2] != '\0')
		{
			len2++;
		}
	if (conCat == NULL)
		return (NULL);
	for (i = 0; s1 != NULL && i < len1; i++)
		conCat[i] = s1[i];
	for (j = 0; s2 != NULL && j < len2; j++)
		conCat[i] = s2[j];
	conCat[i] = '\0';
	return (conCat);
}
