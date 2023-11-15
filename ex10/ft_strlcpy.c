#include <stdio.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        if (i < size - 1)
        {
            dest[i] = src[i];
        }
        i++;
    }
    if(size != 0)
    {
        if (i < size)
            dest[i] = '\0';
        else
            dest[size - 1] = '\0';
    }
    return i;
}
/*
// La funcion copia un string en otro, pero teniendo en cuenta la longitud del de destino, 
//de forma que si se supera, el código trunca el string para evitar errores.
//Hay que tener en cuenta que se necesita un byte para darle el caracter nulo.
int main() {
    char dest[10];
    char src[] = "Hola Mundo";
    unsigned int len;

    len = ft_strlcpy(dest, src, sizeof(dest));
    printf("String copiado: %s\n", dest);
    printf("longitud de src: %u\n", len);

    return 0;
}
*/