#include <unistd.h>

void	ipssi_putchar(char c)
{
	write(1, &c, 1);
}



void	 ipssi_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ipssi_putchar('-');
		ipssi_putchar(nbr);
	}
	else if (nbr > 9)
	{
		ipssi_putnbr(nbr / 10);
		ipssi_putnbr(nbr % 10);
	}
	else
	{
		ipssi_putchar(nbr + '0');
	}
}


int	main(void)
{
	ipssi_putnbr(-42);
}
