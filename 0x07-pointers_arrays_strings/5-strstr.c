/**
 * _strstr - finds the first occurrence of a substring in a string
 *
 * @haystack: pointer to the string to search
 * @needle: pointer to the substring to find
 *
 * Return: a pointer to the beginning of the located substring, or NULL if the
 *         substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char * 1 = haystack;
		char * 2 = needle;

		while (*1 == *2 && *2 != '\0')
		{
			1++;
			2++;
		}

		if (*2 == '\0')
			return (haystack);
	}
	return (NULL);
}
