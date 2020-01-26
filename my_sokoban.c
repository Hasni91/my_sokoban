/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** head
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    if (ac != 2)
        return (0);
    char *str = open_file(av[1]);
    int r = col(str);
    int b = lin(str);
    char **buf = tab1(str, b, r);
    char **tab = tab1(str, b, r);
    int g = searchplin(buf);
    int f = searchpcol(buf);
    int a = 0;

    initscr();
    curs_set(0);
    keypad(stdscr, TRUE);
    while (1) {
        a = 0;

        while (a != b) {
            printw(buf[a]);
            a++;
        }
        buf = move_p(buf, getch());
        clear();
        refresh();
    }
    endwin();
    return (0);
}
