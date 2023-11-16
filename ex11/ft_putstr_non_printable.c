/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <unistd.h>

int ft_is_printable(char c)
{
    if(c < 32 || c == 127)
    {
        return (0);
    }
    return (1);
}

void    ft_gethex(char c, char *result)
{
    char    *ascii_chars;
    
    result[0] = '\\';
    ascii_chars = "0123456789abcdef";
    result[1] = ascii_chars[c / 16];
    result[2] = ascii_chars[c % 16];
    result[3] = '\0';
}

void    ft_putstr_non_printable(char *str)
{
    char    dest[2048];
    int     i;
    int     j;
    
    i = 0;
    j = 0;
    while (*str)
    {
        if (!ft_is_printable(*str))
        {
            char    result[4];
            ft_gethex(*str, result);

            while (result[j])
            {
                dest[i] = result[j];
                i++;
                j++;
            }
        }
        else
        {
            dest[i] = *str;
            i++;
        }
        str++;
    }
    dest[i] = '\0';
    write(1, dest, i);
}

/*
int main()
{
    ft_putstr_non_printable("Coucou\ntu vas bien ?");
    return 0;
}
*/
