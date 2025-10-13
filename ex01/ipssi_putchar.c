#include <unistd.h>

void	ipssi_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	ipssi_putchar('A');
}
