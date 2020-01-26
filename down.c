/*
** EPITECH PROJECT, 2018
** down
** File description:
** down
*/

#include "../include/my.h"

char **down(char **buf)
{
    int g = searchplin(buf);
    int f = searchpcol(buf);
    if (buf[g + 1][f] != '#'){
        if (buf[g + 1][f] == 'X' && buf[g + 2][f] == '#')
            return (buf);
        if (buf[g + 1][f] == 'X' && buf[g + 2][f] == 'X')
            return (buf);
        else if (buf[g + 1][f] == 'X') {
            buf[g + 2][f] = 'X';
        }
        buf[g + 1][f] = 'P';
        buf[g][f] = ' ';
    }
    return (buf);
}
