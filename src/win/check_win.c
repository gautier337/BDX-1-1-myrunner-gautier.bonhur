/*
** EPITECH PROJECT, 2022
** define_window_stuct
** File description:
** my_runner
*/

#include "my_runner.h"

data_t draw_win_or_loose(data_t data)
{
    sfVector2f scale1 = {0.25, 0.25};
    sfVector2f scale2 = {0.05, 0.05};

    if (data.loose == 1 && data.win == 0) {
        sfMusic_pause(data.music);
        sfSprite_setScale(data.win_img.sprite, scale2);
        sfRenderWindow_drawSprite(data.w_set.window,
            data.win_img.sprite_loose, NULL);
        data.end = 1;
        return data;
    }
    if (data.loose == 0 && data.win == 1) {
        sfMusic_pause(data.music);
        sfSprite_setScale(data.win_img.sprite, scale1);
        sfRenderWindow_drawSprite(data.w_set.window,
            data.win_img.sprite, NULL);
        data.end == 1;
        return data;
    }
    return data;
}

data_t check_win(data_t data)
{
    if (data.score > SCORE_WIN - 1 && data.loose == 0)
        data.win = 1;
    return data;
}
