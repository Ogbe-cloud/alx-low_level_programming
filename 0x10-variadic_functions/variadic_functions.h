<<<<<<< HEAD
#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include<stdlib.h>
=======
#ifndef VARIADIC_FUNC
#define VARIADIC_FUNC

#include<stdarg.h>
>>>>>>> 67de683fe43a67f381779fee0637b8545bd14e27

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

<<<<<<< HEAD
#endif
=======
/**
 * struct typ - Struct operators
 * 
 * @c : Char
 * @tp : The function associated
*/

typedef struct typ
{
	char*c;
	void(*tp)(va_list var);
}typ_t;
#endif
>>>>>>> 67de683fe43a67f381779fee0637b8545bd14e27
