/*
** EPITECH PROJECT, 2022
** display_sprites
** File description:
** my_runner
*/

#include "my_runner.h"

void draw_window(data_t data)
{
    if (data.win != 1 && data.loose != 1) {
        sfRenderWindow_clear(data.w_set.window, sfBlack);
        draw_sprites_parallax(data);
        draw_sprites_tiger(data);
        draw_obstacles(data);
        draw_sound(data, data.sound_bool);
        draw_text(data);
    }
    if (data.pause == 1 && data.win != 1)
        draw_pause(data);
    if ((data.win == 1 || data.loose == 1) && data.end == 0)
        data = draw_win_or_loose(data);
    sfRenderWindow_display(data.w_set.window);
}
