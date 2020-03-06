#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main (void)
{
	int x;
	char *s1A;
	char *s2A;
	char string1A[] = "abcd";
	char string2A[] = "abCd";
	s1A = string1A;
	s2A = string2A;
	x = ft_strcmp(s1A, s2A);
	//x = strcmp(s1A, s2A);
	printf("\n\n%s\n%s\nft_strcmp: %d\n",string1A,string2A,x);

	char *s1b;
	char *s2b;
	char string1b[] = "abcd";
	char string2b[] = "abcd";
	s1b = string1b;
	s2b = string2b;
	x = ft_strcmp(s1b, s2b);
	//x = strcmp(s1b, s2b);
	printf("\n%s\n%s\nft_strcmp: %d\n",string1b,string2b,x);

	char *s1c;
	char *s2c;
	char string1c[] = "abCd";
	char string2c[] = "abcd";
	s1c = string1c;
	s2c = string2c;
	x = ft_strcmp(s1c, s2c);
	//x = strcmp(s1c, s2c);
	printf("\n%s\n%s\nft_strcmp: %d\n\n",string1c,string2c,x);


	return (0);
}
