/*
** EPITECH PROJECT, 2018
** bs
** File description:
** bs
*/

char **bs(char **buf, char **tab, int b)
{
    int a = 0;

    while (a != b) {
        buf[a] = tab[a];
        a++;
    }
    return (buf);
}
