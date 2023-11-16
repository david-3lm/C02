#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i;
    
    i = 0;
    while (*s1 && (*s1 == *s2) && i < n - 1)
    {
        s1++;
        s2++;
        i++;
    }
    return *s1 - *s2;
}
/*
int main()
{
    char *a = "Hola dsads";
    char *b = "Holad";
    
    int i = ft_strncmp(a,b,3);
    printf("%d",i);

    return 0;
}
*/