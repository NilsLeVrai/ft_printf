# include "ft_printf.h"

int main ()
{
	int i = 121212;

	printf ("%i\n", ft_printf("Moi: %d\n", i));
	printf("%i\n", printf("Vraie: %d\n", i));
}