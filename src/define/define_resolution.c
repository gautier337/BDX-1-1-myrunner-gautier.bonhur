/*
** EPITECH PROJECT, 2022
** define_resolution
** File description:
** my_runner
*/

#include "my_runner.h"

int check_numbers(int resolution, int argc, char **argv)
{
    for (int i = 1; i <= 2; i++)
        if (check_number(i, argc, argv) == 84)
            resolution = 1;
}

data_t change_resolution(data_t data, int argc, char **argv)
{
    sfVideoMode ed = {my_getnbr(argv[1]), my_getnbr(argv[2]), 32};

    data.w_set.window = sfRenderWindow_create(ed,
            WINDOW_NAME, sfResize | sfNone | sfTitlebar | sfClose, NULL);
    return data;
}

data_t define_resolution(data_t data, int argc, char **argv)
{
    int resolution = 1;
    sfVideoMode df = {1920, 1080, 32};

    if (argc == 3) {
        resolution = 0;
        resolution = check_numbers(resolution, argc, argv);
    }
    if (resolution == 0) {
        return change_resolution(data, argc, argv);
    }
    data.w_set.window = sfRenderWindow_create(df,
        WINDOW_NAME, sfResize | sfNone | sfTitlebar | sfClose, NULL);
    return data;
}
