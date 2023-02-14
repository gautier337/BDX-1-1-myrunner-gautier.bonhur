/*
** EPITECH PROJECT, 2021
** main
** File description:
** my_runner
*/

#include "my_runner.h"

int main(int argc, char **argv, char **argvenv)
{
    data_t data;
    timep_t parallax_time;

    if (check_env(argvenv) == 84) {
        my_putstr("Error: you don't have environment.\n");
        return 84;
    }
    if (argc == 2 && argv[1][0] == '-' && argv[1][1] == 'h')
        return display_helper();
    data = define_data(data, argc, argv);
    parallax_time.timer = sfClock_create();
    my_runner(argc, argv, data, parallax_time);
    return 0;
}
