/*
** EPITECH PROJECT, 2018
** up
** File description:
** up
*/

#include "../include/my.h"

char **up(char **buf)
{
    int g = searchplin(buf);
    int f = searchpcol(buf);

    if (buf[g - 1][f] != '#' ) {
        if (buf[g - 1][f] == 'X' && buf[g - 2][f] == '#')
            return (buf);
        if (buf[g - 1][f] == 'X' && buf[g - 2][f] == 'X')
            return (buf);
        else if (buf[g - 1][f] == 'X' && buf[g - 2][f] != '#') {
            buf[g - 2][f] = 'X';
        }

        buf[g - 1][f] = 'P';
        buf[g][f] = ' ';
        }

}
