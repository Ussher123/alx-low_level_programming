/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: pointer to the string to search
 * @accept: pointer to the string of bytes to accept
 *
 * Return: number of bytes in the initial segment of s which consist only of
 *         bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n;

	n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}

	return (n);
}
