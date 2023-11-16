#include <stdio.h>
#include <unistd.h>

char    *ft_strcat(char *dest, char *src)
{
    char    *start;
    
    start = dest;
    while (*dest)
    {
        dest++;    
    }
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return start;
}
/*
int main()
{
    char a[20] = "Hola";  
    char b[] = " Mundo";
    
    ft_strcat(a, b);
    printf("%s\n", a); 

    return 0;
}
*/