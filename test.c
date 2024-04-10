/**
 * temp_ints - function that swap ints
 *
 * @a: integer to swap with b
 * @b: integer to swap with a
*/

void temp_ints(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;	
}