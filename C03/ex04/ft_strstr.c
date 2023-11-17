#include <stdio.h>

char    *ft_strstr(char *str, char *to_find)
{
    int i;
    char *start;
    
    i = 0;
    while (*str)
    {
        start = str;
        if (*str == to_find[i])
        {
            while (to_find[i] != '\0' && str[i] == to_find[i])
            {
                i++;
            }
            if (to_find[i] == '\0')
                return (start);
            i = 0;
        }
        str++;
    }
    return (NULL);
}
/*
int main()
{
    char *result;
    
    char a[] = "Hola buenos dias este es un char de ejemplo."; 
    char b[] = "este";
    
    result = ft_strstr(a,b);
    printf("%s", result);

    return 0;
}
*/