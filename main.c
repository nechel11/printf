#include "ft_printf.h"
#include <stdio.h>

int main(){
	int a = 5;
	ft_printf("%s", "string by ft_printf\n");
	printf("%s", "string by printf\n");
	printf("__________________\n");
	ft_printf("char by ft_printf %c\n", 'A');
	printf("char by printf %c\n", 'A');
	printf("__________________\n");
	ft_printf("pointer adress by ft_printf %p\n", &a);
	printf("pointer adress by printf %p\n", &a);
	printf("__________________\n");
	ft_printf("decimal  by ft_printf %d\n", a);
	printf("decimal  by printf %d\n", a);
	printf("__________________\n");
	ft_printf("integer  by ft_printf %i\n", a);
	printf("integer  by printf %i\n", a);
	return 0;
}