/*
** EPITECH PROJECT, 2022
** my_runner
** File description:
** define timmer
*/

#include "my_runner.h"

data_t define_display(data_t data)
{
    data.timer.timer = sfClock_create();

    return data;
}
