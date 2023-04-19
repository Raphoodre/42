#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;

    if (!s)
        return(NULL);

    i = ft_strlen(s);
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