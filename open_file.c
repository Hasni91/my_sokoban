/*
** EPITECH PROJECT, 2018
** oopen file
** File description:
** map
*/

#include "../include/my.h"

char *open_file(char *file)
{
    struct stat st;
    stat(file, &st);

    int b = (st.st_size);

    char *buf = malloc(sizeof(char) * (b + 1));

    int fd = open(file, O_RDONLY);

    read(fd, buf, b);
    return (buf);
}
