#include "ft_printf.h"

int main ()
{
	unsigned int k = 245;
	k = ft_putnbr(1502, "0123456789");
	printf ("%d\n", ft_printf("%u\n", k));
	printf("%d\n", printf("%u\n", k));
}