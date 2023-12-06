# include "ft_printf.h"

int main ()
{
	int i = 9;

	printf ("%d\n", ft_printf("Moi: %d\n", i));
	printf("%d\n", printf("Vraie: %d\n", i));
}