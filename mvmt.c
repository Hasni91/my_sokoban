/*
** EPITECH PROJECT, 2018
** mvmt
** File description:
** movement
*/

#include "../include/my.h"

char **move_p(char **buf, int l)
{
    int a = 0;

    if (l == KEY_RIGHT) {
        right(buf);
    }


    if (l == KEY_LEFT) {
        left(buf);
    }


    if (l == KEY_DOWN) {
        down(buf);
    }

    if (l == KEY_UP) {
        up(buf);
    }
    return (buf);
}
