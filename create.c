/*
** EPITECH PROJECT, 2018
** create
** File description:
** cerate
*/

#include "../include/my.h"

char **tab1(char *str, int lin, int col)
{
    char **tab = malloc(sizeof(char *) * (lin + 1));
    int a = 0;
    int b = 0;
    int c = 0;

    while (a != lin) {
        tab[a] = malloc(sizeof(char) * (col + 1));
        a++;
    }
    a = 0;
    while (a != lin) {
        while (b != col) {
            tab[a][b] = str[c];
            b++;
            c++;
        }
        b = 0;
        a++;
    }
    return (tab);
}

