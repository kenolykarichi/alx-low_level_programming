#ifndef CALC_H
	#define CALC_H
	/**
	 * struct op - A struct op.
	 * @op: The operator.
	 * @f: The associated function.
	 */
	typedef struct op
	{
		char *op;
		int (*f)(int a, int b);
	} op_t;


	int op_add(int a, int b);
	int op_sub(int a, int b);
	int op_mul(int a, int b);
	int op_div(int a, int b);
	int op_mod(int a, int b);
	int (*get_op_func(char *s))(int, int);


	#endif


	 deleted by them: ../0x02-functions_nested_loops/4-isalpha.c                            
        deleted by them: ../0x04-more_functions_nested_loops/4-print_most_numbers.c            
        deleted by them: ../0x07-pointers_arrays_strings/4-strpbrk.c                           
        deleted by them: ../0x0C-more_malloc_free/1-string_nconcat.c                           
        deleted by them: ../0x0E-structures_typedef/4-new_dog.c  