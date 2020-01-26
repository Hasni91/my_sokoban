/*
** EPITECH PROJECT, 2018
** left
** File description:
** left
*/

#include "../include/my.h"

char **left(char **buf)
{
    int g = searchplin(buf);
    int f = searchpcol(buf);

    if (buf[g][f - 1] != '#') {
        if (buf[g][f - 1] == 'X' && buf[g][f - 2] == '#')
            return (buf);
        if (buf[g][f - 1] == 'X' && buf[g][f - 2] == 'X')
            return (buf);
        else if (buf[g][f - 1] == 'X') {
            buf[g][f - 2] = 'X';
        }
        buf[g][f - 1] = 'P';
        buf[g][f] = ' ';
        }
    return (buf);
}
