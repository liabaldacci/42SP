#include <stdio.h>

int ft_find_next_prime(int nb);

int	main(void)
{
	printf("What is the next prime number after 7? %d\n", ft_find_next_prime(9));
	printf("What is the next prime number after 25? %d\n", ft_find_next_prime(25));
	printf("What is the next prime number after 0? %d\n", ft_find_next_prime(0));
	printf("What is the next prime number after 2147483644? %d\n", ft_find_next_prime(2147483644));
	return (0);
}
