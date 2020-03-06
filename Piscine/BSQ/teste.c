#include <stdio.h>
#include <stdlib.h>

#define LINHAS 6
#define COLUNAS 5

char ft_find_largest(char **str, int linhas)
{
    printf("yo");
    int i;
    int j;
    char max;

    i = 0;
    max = 0;
    while (i < linhas)
    {
        j = 0;
        while (str[i][j] != '\0')
        {
            if (str[i][j] > max)
                max = str[i][j];
            j++;
        }
        i++;
    }
    return (max);
}

void    ft_convert(char **str, int linhas)
{
    printf("hey");
    int j;
    int i;
    char largest;

    i = 0;
    j = 0;
    largest = ft_find_largest(str, linhas);
    printf("Largest number: %c\n", largest);
}



int     main(void)
{
    char **solucao;
    int j;
    int i;
    char mapa[6][5] = {{'0', '1', '1', '0', '1'},  
                    {'1', '1', '0', '1', '0'},  
                    {'0', '1', '1', '1', '0'},  
                    {'1', '1', '1', '1', '0'},  
                    {'1', '1', '1', '1', '1'},  
                    {'0', '0', '0', '0', '0'}};

    char pre_solucao[6][5] = {{'0', '1', '1', '0', '1'},  
                    {'1', '1', '0', '1', '0'},  
                    {'0', '1', '1', '1', '0'},  
                    {'1', '1', '2', '2', '0'},  
                    {'1', '2', '2', '3', '1'},  
                    {'0', '0', '0', '0', '0'}};
    solucao = (char **)malloc(sizeof(char *) * LINHAS);
    while (i < LINHAS)
    {
        solucao[i] = (char *)malloc(sizeof(char) * COLUNAS);
        i++;
    }
    i = 0;
    while (i < LINHAS)
    {
        j = 0;
        while (j < COLUNAS)
        {
            printf("%c ", pre_solucao[i][j]);
            solucao[i][j] = pre_solucao[i][j];
            j++;
        }
        printf("\n");
        i++;
    }
    ft_convert(solucao, LINHAS);
    return (0);
}