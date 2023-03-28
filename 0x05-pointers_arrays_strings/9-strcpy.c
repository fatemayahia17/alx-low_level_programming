/**
 * *_strcpy - The function name
 * @dest: a pointer to the destination buffer
 * @src: a pointer to the source string
 * \0 - terminating null byte
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
