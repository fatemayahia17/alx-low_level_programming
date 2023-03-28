/**
 *_strlen - The function name
 * @s: function parameter and first pointer
 * Return: cnt
 */

int _strlen(char *s)
{
	int cnt = 0;

	while (*s != '\0')
	{
		++cnt;
	}
	return (cnt);
}
