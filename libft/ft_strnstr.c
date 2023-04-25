#include "libft.h"

char *ft_strnstr(const char	*big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    if (!little || !big)
        return (NULL);
    
    // vérifie si `little` est une chaîne vide
    // si c'est le cas, la première occurrence de `little` est au début de `big`
    if (!little || !little[0])
    if (!little || !little[0])
        return ((char*)big);
    i = 0;
    while (big[i] && i < len)
    {
        j = 0;

        // parcourt `big` et `little` jusqu'à la fin ou jusqu'à `len`
        // si les caractères des deux chaînes correspondent, incrémente `j`
        while (big[i + j] && little[j] && i + j < len && big[i + j] == little[j])
            j++;
        // si la totalité de `little` est trouvée dans `big`, renvoie un pointeur vers la position de `little` dans `big`
        if (!little[j])
            return (((char*)big + i));
        i++;
    }
    return (NULL);
}