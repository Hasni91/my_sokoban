/*
** EPITECH PROJECT, 2018
** search line
** File description:
** line
*/

#include "../include/my.h"

int lin(char *map)
{
    int a = 0;
    int lin = 0;

    while (map[a] != '\0') {

        if (map[a] == '\n') {
            lin++;
        }
        a++;
    }
    return (lin);
}
