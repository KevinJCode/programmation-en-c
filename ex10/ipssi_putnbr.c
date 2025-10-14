#include <unistd.h>

void	ipssi_putnbr(int nb)
{
	char	c;

	c = nb;
	write(1, &(char){c / 10 + '0'}, 1);
	write(1, &(char){c % 10 + '0'}, 1);
}
