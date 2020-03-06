#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
 char str[] = "sdfsd";
 char to_find[] = "asdf";
 int n = 2;
 
 printf("%s", ft_strncat(str, to_find, 2 ));
 
 return(0);
}
