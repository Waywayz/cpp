#include <iostream>

/*
    :: == namespace
    std == precise que j'utilise la biblioteque standard
    cout == sortie standard
    cin == entree standard
    toupper == fontion carac min -> maj
    endl == retour a la ligne
    <<  ou >> == redirection de flux
*/

int main(int ac, char **av)
{
    if (ac > 1)
        for (int i = 1; av[i]; i++)
        {
            for (int j = 0; av[i][j]; j++)
                std::cout << (char) toupper(av[i][j]);
            if (i < ac - 1)
                std::cout << ' ';
        }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return 0;
}