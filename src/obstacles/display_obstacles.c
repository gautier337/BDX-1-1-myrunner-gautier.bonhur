/*
** EPITECH PROJECT, 2022
** display_obstacles
** File description:
** my_runner
*/

#include "my_runner.h"

void draw_obstacles(data_t data)
{
    sfRenderWindow_drawSprite(data.w_set.window,
        data.obs.one.sprite, NULL);
    sfRenderWindow_drawSprite(data.w_set.window,
        data.obs.two.sprite, NULL);
    sfRenderWindow_drawSprite(data.w_set.window,
        data.obs.three.sprite, NULL);
}
