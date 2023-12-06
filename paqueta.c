# include "ft_printf.h"

int main ()
{
	int i = 'w';

	printf ("%d\n", ft_printf("  %c\n", i));
	printf("%d\n", printf("  %c\n", i));
}