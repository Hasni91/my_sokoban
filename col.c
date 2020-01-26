/*
** EPITECH PROJECT, 2018
** colonne search
** File description:
** lcol
*/

#include "../include/my.h"

int col(char *map)
{
    int col = 0;
    while (map[col] != '\n') {
        col++;
    }

    col = col + 1;
    return (col);
}
