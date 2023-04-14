#include "libft.h"
int ft_atoi(const char *str) {
    int result = 0;
    int sign = 1;
    int i = 0;

    // Ignore les espaces au début de la chaîne
    while (str[i] == ' ') {
        i++;
    }

    // Gère le signe + ou -
    if (str[i] == '-') {
        sign = -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    // Convertit chaque caractère de la chaîne en un entier
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        //En effet, lorsqu'on ajoute un nouveau chiffre à la partie entière, 
        //on veut l'ajouter à la position des unités, puis des dizaines, des centaines, etc. 
        //Pour cela, on doit multiplier le résultat précédent par 10 pour décaler les chiffres vers la gauche et créer une nouvelle position à droite pour le nouveau chiffre. 
        //Par exemple, si le résultat précédent est 123 et que le nouveau chiffre est 4, on doit calculer 123 * 10 + 4 = 1234 pour obtenir le nouveau résultat.
        i++;
    }

    // Applique le signe et renvoie le résultat
    return sign * result;
}

int main(int argc, char *argv[])
{
    if(!argc)
        return 0;
    int native;
    int mine;

    native = atoi(argv[1]);
    mine = ft_atoi(argv[1]);
    printf("Atoi : %d", native);
    printf("\n");
    printf("My Atoi : %d", mine);
    return 0;
}