#include "sort.h"

/**
 * swaping - =======
 * @m: =======
 * @n: =====
 *
 */

void swaping(int *m, int *n)
{
	int t;

	t = *m;
	*m = *n;
	*n = t;
}

/**
 * selection_sort - ======
 * @array: ======
 * @size: ====
 * Description: =====
 */

void selection_sort(int *array, size_t size)
{
	int *in;
	size_t l, o;

	if (array == NULL || size < 2)
		return;

	for (l = 0; l < size - 1; l++)
	{
		in = array + l;
		for (o = l + 1; o < size; o++)
			in = (array[o] < *in) ? (array + o) : in;

		if ((array + l) != in)
		{
			swaping(array + l, in);
			print_array(array, size);
		}
	}
}
