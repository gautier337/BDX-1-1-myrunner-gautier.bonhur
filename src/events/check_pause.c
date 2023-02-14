/*
** EPITECH PROJECT, 2022
** check_pause
** File description:
** my_runner
*/

#include "my_runner.h"

void draw_pause(data_t data)
{
    sfVector2f scale = {0.5, 0.5};

    sfSprite_setScale(data.pause_img.sprite, scale);
    sfRenderWindow_drawSprite(data.w_set.window, data.pause_img.sprite, NULL);
}

data_t check_pause(data_t data)
{
    if (data.w_set.event.type == sfEvtKeyPressed &&
        data.w_set.event.key.code == sfKeyP && data.pause == 1) {
        data.pause = 0;
        sfMusic_play(data.music);
    } else if (data.w_set.event.type == sfEvtKeyPressed &&
        data.w_set.event.key.code == sfKeyP && data.pause == 0
        && data.win == 0 && data.loose == 0) {
        data.pause = 1;
    }
    return data;
}
