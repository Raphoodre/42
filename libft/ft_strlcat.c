#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t dest_length;
    size_t src_length;

    
    src_length = ft_strlen(src);
    dest_length = ft_strlen(dst);
    j = dest_length;
    i = 0;
    if (dest_length < size - 1 && size > 0)
    {
        while (src[i] && dest_length + i < size - 1)
        {
            dst[j] = src[i];
            j++;
            i++;
        }
        dst[j] = 0;
    }
    if (dest_length >= size)
        dest_length = size;
    
    return (dest_length + src_length);
}

// int main(int n,char *argv[])
// {
//     if (!n)
//         return 0;
    
//     char dest[20] = "Despacito";
//     int len = ft_atoi(argv[2]);
//     printf("Dest avant : %s", dest);
//     printf("\n");
//     ft_strlcat(dest, argv[1], len);
//     printf("Dest après : %s", dest);
//     printf("\n");
// }