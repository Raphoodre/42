#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;

    i = 0;

    if (!s)
        return(NULL);

    while(s[i])
        i++;

    while (s[i])
    {
        if (s[i] == (char)c)
            return((char*)(s+i));
        i--;
    }
    if (s[i] == (char)c)
        return((char*)(s+i));
    return (NULL);
}