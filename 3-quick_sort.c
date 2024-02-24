#include "sort.h"

int partition(int *array, size_t size, int left, int right);
void sort(int *array, size_t size, int left, int right);

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
 * partition - ============
 * @array: ======
 * @size: ======
 * @right: =============
 * @left: ========
 * Return: ====
 */

int partition(int *array, size_t size, int left, int right)
{

	int *vot, sama, kasa;

	vot = array + right;
	for (sama = kasa = left; kasa < right; kasa++)
	{
		if (array[kasa] < *vot)
		{
			if (sama < kasa)
			{
				swaping(array + kasa, array + sama);
				print_array(array, size);
			}
			sama++;
		}
	}

	if (array[sama] > *vot)
	{
		swaping(array + sama, vot);
		print_array(array, size);
	}

	return (sama);
}

/**
 * sort - =========
 * @array: ==========
 * @size: ===
 * @left: =====================
 * @right: ===
 * Description: =======
 */

void sort(int *array, size_t size, int left, int right)
{

	int gefe;

	if (right - left > 0)
	{
		gefe = partition(array, size, left, right);
		sort(array, size, left, gefe - 1);
		sort(array, size, gefe + 1, right);
	}
}

/**
 * quick_sort - ======
 * @array: =
 * @size: =====
 * Description: =========
 */

void quick_sort(int *array, size_t size)
{

	if (array == NULL || size < 2)
		return;

	sort(array, size, 0, size - 1);
}
