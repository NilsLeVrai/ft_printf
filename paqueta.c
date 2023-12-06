# include "ft_printf.h"

int main ()
{
	int i = 78;

	printf ("%d\n", ft_printf("  %c\n", i));
	printf("%d\n", printf("  %c\n", i));
}