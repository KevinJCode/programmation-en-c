#include <unistd.h>

void	ipssi_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			write(1, &(char){a / 10 + '0'}, 1);
			write(1, &(char){a % 10 + '0'}, 1);
			write(1, " ", 1);
			write(1, &(char){b / 10 + '0'}, 1);
			write(1, &(char){b % 10 + '0'}, 1);
			write(1, ",", 1);
			b++;
		}
		a++;
	}
}
