#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all arguements
 * @n: number of arguements
 * Return: 0 is n is 0 or return sum
 */

<<<<<<< HEAD
int sum_them_all(const unsigned int n, ...)
=======
int sum_them_all(const unsigned int n , ...)
>>>>>>> 67de683fe43a67f381779fee0637b8545bd14e27
{
	va_list numbers;
	unsigned int i;
	int result = 0;

<<<<<<< HEAD
	if (n == 0)
	{
		return (0);
	}
	va_start(numbers, n);

	for (i = 0; i < n ; i++)
	{
		result += va_arg(numbers, int);
	}
=======
	if(n==0){
		return(0);
	}else{
        
     va_start(numbers , n);
		for(i =0 ; i<n ; i++)
	{
		result += va_arg(numbers, int);
	}

>>>>>>> 67de683fe43a67f381779fee0637b8545bd14e27
	va_end(numbers);
	return (result);

	}

<<<<<<< HEAD
}
=======
	
}


>>>>>>> 67de683fe43a67f381779fee0637b8545bd14e27
