#include <stdio.h>

void	ipssi_swap(int *a, int *b);

int	main(void)
{
	int	x = 5;
	int	y = 9;

	printf("Avant : x = %d, y = %d\n", x, y);
	ipssi_swap(&x, &y);
	printf("Après : x = %d, y = %d\n", x, y);
	return (0);
}
