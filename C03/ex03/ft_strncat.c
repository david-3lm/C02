#include <stdio.h>
#include <unistd.h>

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    char    *start;
    int     i;
    
    i = 0;
    start = dest;
    while (*dest)
    {
        dest++;    
    }
    while (*src && i < nb)
    {
        *dest = *src;
        dest++;
        src++;
        i++;
    }
    *dest = '\0';
    return start;
}
/*
int main()
{
    char a[30] = "Hola";  
    char b[] = " Mundo, ¿Como estas?";
    
    ft_strncat(a, b, 6);
    printf("%s\n", a); 

    return 0;
}
*/