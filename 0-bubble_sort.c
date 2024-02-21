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
 * bubble_sort - ==================
 * @array: ==================
 * @size: =====
 *
 *
 * Description: ===========
 */

void bubble_sort(int *array, size_t size)
{
	size_t o, lenght = size;
	bool b = false;

	if (array == NULL || size < 2)
		return;

	while (b == false)
	{
		b = true;
		for (o = 0; o < lenght - 1; o++)
		{
			if (array[o] > array[o + 1])
			{
				swaping(array + o, array + o + 1);
				print_array(array, size);
				b = false;
			}
		}
		lenght--;
	}
}
