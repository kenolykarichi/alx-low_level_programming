#include "function_pointers.h"
	#include <stdio.h>
	/**
	 * print_name - print name using pointer to function
	 * @name: string to add
	 * @f: pointer to function
	 * Return: nothing
	 **/
	void print_name(char *name, void (*f)(char *))
	{
		if (name == NULL || f == NULL)
			return;


		f(name);
<<<<<<< HEAD
	}
=======
	}
>>>>>>> 0c07bcad988d34ee3bfb37e8e55661d8be7411db
