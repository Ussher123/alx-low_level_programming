/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: pointer to the string to search
 * @accept: pointer to the string of bytes to accept
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 *         or a NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}

	return (NULL);
}
