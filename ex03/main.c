#include <stdio.h>

void	ipssi_ultimate_ft(int *********nbr);

int	main(void)
{
	int	nombre;
	int	*n1 = &nombre;
	int	**n2 = &n1;
	int	***n3 = &n2;
	int	****n4 = &n3;
	int	*****n5 = &n4;
	int	******n6 = &n5;
	int	*******n7 = &n6;
	int	********n8 = &n7;
	int	*********n9 = &n8;

	ipssi_ultimate_ft(n9);
	printf("%d\n", nombre);
	return (0);
}
