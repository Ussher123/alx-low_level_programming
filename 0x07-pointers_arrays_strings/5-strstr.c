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
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}

		if (*j == '\0')
			return (haystack);
	}
	return (NULL);
}
