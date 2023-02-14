/*
** EPITECH PROJECT, 2021
** check_errors
** File description:
** my_runner
*/

#include "my_runner.h"

int check_display(char *env)
{
    char *display = "DISPLAY";

    if (!env)
        return 84;
    for (int i = 0; env[i] == display[i]; i++)
        if (display[i] == 'Y')
            return 1;
    return 0;
}

int check_env(char **argvenv)
{
    if (!argvenv)
        return 84;

    for (int i = 0; argvenv[i] != NULL; i++)
        if (check_display(argvenv[i]))
            return 1;
    return 84;
}
