#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
int main()
{
	char str1[] = "This is string is...";
	char str2[] = "now concatenated, but will be truncated.";
	char *s1;
	char *s2;
	s1 = str1;
	s2 = str2;
	printf("\n\n%s",str1);
#include <string.h>
//	unsigned int result = strlcat(s1, s2, 30);
	unsigned int result = ft_strlcat(s1, s2, 30);
	printf("\n%s\n-(n = 10)-> %d\n%s\n\n",str2,result,str1);
	return (0);
}
