#include <fcntl.h> 
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	if (to_find[0] == '\0')
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] == to_find[j])
		{
			return (i);
		}
		i++;
	}
	return (0);
}

  
int		ft_lookfornumber(char nb, int i, char *numero)
{
	int 	fd;
	int		str_point;
	char 	buff[790];

	fd = open("numbers.dict", O_RDONLY);
	if (fd < 0)
		write(1, "Error Opening Lib\n", 18);
	read(fd, buff, 790);
	
	str_point = ft_strstr(buff,&nb);
	while (buff[str_point] != '\n')
	{
		if (buff[str_point] != ':' && buff[str_point] != ' ' && !(buff[str_point] >= '0' && buff[str_point] <= '9'))
		{
			numero[i] = buff[str_point];
			i++;
		}
		str_point++;
	}
	close(fd);
	numero[i] = ' ';
	i++;
	return (i);
}

int ft_hundred(int index)
{
	if (index == 2 || index == 5 || index == 8 || index == 11  || index == 14 || index == 17 || index == 20 || index == 23 || index == 26 || index == 29 || index == 32 || index == 35 || index == 38)
	{
		return (1);
	}
	return (0); 
}

char *ft_check_index(int index)
{
	if (ft_hundred(index) == 1)
		return(" hundred ");
	if (index == 3)
		return(" thousand ");
	if (index == 6)
		return(" million ");
	if (index == 9)
		return(" billion ");
	if (index == 12)
		return(" trillion ");
	if (index == 15)
		return(" quadrillion ");
	if (index == 18)
		return(" quintillion ");
	if (index == 21)
		return(" sextillion ");
	if (index == 24)
		return(" octillion ");
	if (index == 27)
		return(" nonillion ");
	if (index == 30)
		return(" decillion ");
	if (index == 33)
		return(" undecillion ");
	return (" ");
	
}

void	ft_spaces(char *str, char *new)
{
	int i;
	int len;
	int spaces;
	char *word;
	//int word_len;

	//printf("\nString: %s", str);
	len = ft_strlen(str);
	i = 0;
	spaces = 0;
	new[i] = new[i];
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] != '\0' && str[i - 4] != 'z')
			{
				spaces++;
				word = ft_check_index(spaces);
				while (*word != '\0')
				{
					*new = *word;
					word++;
					new++;
				}
			}
		}	
		else
		{
			*new = str[i];
			new++;
		}
		i++;
	}
}

void	ft_divide_and_conquer(char *nb, char *numero)
{
	int i;
	int j;
	int num_size;

	num_size = ft_strlen(nb);
	i = num_size - 1;
	j = 0;
	while (i >= 0)
	{
		j = ft_lookfornumber(nb[i], j, numero);
		i--;
	}


}

void reverse(char* begin, char* end) 
{ 
    char temp; 
    while (begin < end) { 
        temp = *begin; 
        *begin++ = *end; 
        *end-- = temp; 
    } 
} 

void reverseWords(char* s) 
{ 
    char* word_begin = NULL; 
    char* temp = s; /* temp is for word boundry */
  
    /*STEP 1 of the above algorithm */
    while (*temp) { 
        /*This condition is to make sure that the string start with 
          valid character (not space) only*/
        if ((word_begin == NULL) && (*temp != ' ')) { 
            word_begin = temp; 
        } 
        if (word_begin && ((*(temp + 1) == ' ') || (*(temp + 1) == '\0'))) { 
            reverse(word_begin, temp); 
            word_begin = NULL; 
        } 
        temp++; 
    } /* End of while */
  
    /*STEP 2 of the above algorithm */
    reverse(s, temp - 1); 
}


int		main(int argc, char **argv)
{

	char	*numero;
	char	*rev_num;
	int 	i;
	//char	*final_num;

	if (argc != 2)
	{
		printf("COLOCA A PORRA DO ARGUMENTO.");
		return (1);
	}
	numero = (char*)malloc(sizeof(char) * 500 + 1);
	rev_num = (char*)malloc(sizeof(char) * 500 + 1);
	i = 0;
	while (i <= 501)
	{
		numero[i] = '\0';
		i++;
	}
	ft_divide_and_conquer(argv[1], numero);
	ft_spaces(numero, rev_num);
	reverseWords(rev_num); 
	printf("\n%s\n", rev_num);
	return (0);
}
