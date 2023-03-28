/**
 * _atoi - The function name
 * while - the function that iterates through the code
 * s - character specifier
 * break - skips a line of code
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
		else if (s[i] == '+')
		{
			sign = 1;
		}
		else if (result > 0)
		{

		/**
		 * We've already encountered a number and we've hit a non-numeric character,
		 * so we can stop parsing and return the result so far.
		 */
			break;
		}
		i++;
	}
	return (result * sign);
}
