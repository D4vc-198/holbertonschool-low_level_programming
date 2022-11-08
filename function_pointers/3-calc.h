#ifndef PROTOTYPES
#define PROTOTYPES

/**
 * struct op - Struct op
 * @op: operator
 * @f: function
 */

typedef struct op
{
	char *op;
	int (*f)(int num1, int num2);
} op_t;

int operation_add(int num1, int num2);
int operation_sub(int num1, int num2);
int operation_mult(int num1, int num2);
int operation_div(int num1, int num2);
int operation_mod(int num1, int num2);

int (*get_op_func(char *s))(int, int);

#endif
