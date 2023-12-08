#include "ft_printf.h"
#include <stdio.h>

int main ()
{
	int a = 48;
	char b = '{';
	void* c = 0;

	printf("%d", ft_printf("%d %cc %% %p", a, b, c));
	printf("\n");
	printf("%d", printf("%d %cc %% %p", a, b, c));
	printf("\n");
	printf("%d", a + a);
	printf("\n");
	ft_printf("%d", a + a);
}