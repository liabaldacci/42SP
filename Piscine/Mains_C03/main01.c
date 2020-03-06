#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);
int main ()
{
	char *s1A;
	char *s2A;
	char string1A[] = "abcd";
	char string2A[] = "abCd";
	s1A = string1A;
	s2A = string2A;
	int x = ft_strncmp(s1A, s2A, 2);
	printf("\n\n%s\n%s\nft_strcmp n=2: %d\n",string1A,string2A,x);

	char *s1b;
	char *s2b;
	char string1b[] = "abcd";
	char string2b[] = "abcd";
	s1b = string1b;
	s2b = string2b;
	x = ft_strncmp(s1b, s2b, 5);
	printf("\n%s\n%s\nft_strcmp n=5: %d\n",string1b,string2b,x);

	char *s1c;
	char *s2c;
	char string1c[] = "abCd";
	char string2c[] = "abcd";
	s1c = string1c;
	s2c = string2c;
	x = ft_strncmp(s1c, s2c, 3);
	printf("\n%s\n%s\nft_strcmp n=3: %d\n",string1c,string2c,x);

#include <string.h>
	x = strncmp(s1c, s2c, 3);
	printf("proof from last: %d\n\n",x);

	return (0);
}
