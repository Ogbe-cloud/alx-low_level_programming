#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all arguements
 * @n: number of arguements
 * Return: 0 is n is 0 or return sum
 */

int sum_them_all(const unsigned int n , ...)
{
	va_list numbers;
	va_start(numbers , n);
	int result = 0;

	if(n==0){
		return(0);
	}else{

		for(int i =0 ; i<numbers ; i++)
	{
		result += va_arg(numbers, int);
	}

	va_end(numbers);
	return (result);

	}

	
}


