/*
** EPITECH PROJECT, 2022
** resolutionnbrcheck
** File description:
** my_runner
*/

#include "my_runner.h"

int check_number(int i, int argc, char **argv)
{
    for (int x = 0; x < my_strlen(argv[i]); x++) {
        if (!(argv[i][x] >= '0' && argv[i][x] <= '9')) {
            my_putstr(WRONG_RESOLUTION);
            return 84;
            }
        }
    return 0;
}
