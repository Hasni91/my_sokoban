/*
** EPITECH PROJECT, 2018
** pos p
** File description:
** posyes
*/

#include "../include/my.h"

int searchplin(char **tab)
{
    int a = 0;
    int b = 0;
    while (tab[a][b] != 'P') {
        if (tab[a][b] == '\n') {
            a = a + 1;
            b = 0;
        }
        b++;
    }
    return (a);
}

int searchpcol(char **tab)
{
    int a = 0;
    int b = 0;
    while (tab[a][b] != 'P') {
        if (tab[a][b] == '\n') {
            a = a + 1;
            b = 0;
        }
        b++;
    }
    return (b);
}