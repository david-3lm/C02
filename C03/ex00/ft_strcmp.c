#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}
/*
int main()
{
    char *a = "Hola";
    char *b = "Hola";
    
    int i = ft_strcmp(a,b);
    printf("%d",i);

    return 0;
}
*/