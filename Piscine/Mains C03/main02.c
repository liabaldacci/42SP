#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
	char dest[10] = "abc";
	char src[] = "def";
	
	ft_strcat(dest, src);
	printf("%s\n", dest);
	return 0;
}
