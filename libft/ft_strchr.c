#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;
    if (!s)
        return(NULL);

    i = 0;
    while (s[i])
    {
        if (s[i] == (char)c)
            return((char*)(s+i));
            //La syntaxe utilisée pour le cast est la suivante : (char*). 
            //Cela indique au compilateur que nous voulons convertir le pointeur en question en un pointeur vers un caractère.
            //s a l'index i !
        i++;
    }
    if (s[i] == (char)c)
        return((char*)(s+i));
    return (NULL);
}