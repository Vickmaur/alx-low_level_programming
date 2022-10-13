#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its p * aramters.
 * @n: The number of paramters passed to the f * unction.
 * @...: A variable number of paramters to cal * culate the sum of.
 * Return: If n == 0 - 0.Otherwise - the sum o * f all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
