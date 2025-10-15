#include <unistd.h>

void	ipssi_putnbr(int nb)
{
	char	c;

	c = nb;
	write(1, &(char){c + '0'}, 1);
	write(1, &(char){c + '0'}, 1);
}


int	main(void)
{
	ipssi_putnbr(213);
	return(1);
}
