#include <stdio.h>

int ft_is_prime(int nb);

int	main(void)
{
	printf("Is the number 9 prime? 1 for True 0 for False: %d\n", ft_is_prime(9));
	printf("Is the number 2147483647 prime? 1 for True 0 for False: %d\n", ft_is_prime(2147483647));
	printf("Is the number 0 prime? 1 for True 0 for False: %d\n", ft_is_prime(0));
	printf("Is the number 127 prime? 1 for True 0 for False: %d\n", ft_is_prime(127));
	return (0);
}
