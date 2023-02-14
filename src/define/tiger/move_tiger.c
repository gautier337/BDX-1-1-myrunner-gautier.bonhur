/*
** EPITECH PROJECT, 2022
** move_tigger
** File description:
** my_runner
*/

#include "my_runner.h"

data_t define_timer_t(data_t data)
{
    data.tiger.time = sfClock_getElapsedTime(data.tiger.timer);
    data.tiger.seconds = data.tiger.time.microseconds / 1000000.0;

    return data;
}

data_t move_tigger_basic(data_t data)
{
    sfVector2f my_pos = {data.tiger.x, data.tiger.y};

    if (data.tiger.rect.left >= 500)
        data.tiger.rect.left = -9;

    sfSprite_setScale(data.tiger.sprite_tiger, data.tiger.scale);
    sfSprite_setTextureRect(data.tiger.sprite_tiger, data.tiger.rect);
    sfSprite_setPosition(data.tiger.sprite_tiger, my_pos);

    data.tiger.rect.left = data.tiger.rect.left + 100;

    return data;
}
