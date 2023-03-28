/**
 *swap_int - The function name
 * @a: function parameter and first pointer
 * @b: function parameter and second pointer
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
