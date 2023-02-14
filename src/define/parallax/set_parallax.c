/*
** EPITECH PROJECT, 2022
** set_parallax
** File description:
** set_parallax
*/

#include "my_runner.h"

data_t define_texture_parallax(data_t data)
{
    sfSprite_setTexture(data.parallax.sprite_9,
        data.parallax.texture_9, sfTrue);
    sfSprite_setTexture(data.parallax.sprite_8,
        data.parallax.texture_8, sfTrue);
    sfSprite_setTexture(data.parallax.sprite_7,
        data.parallax.texture_7, sfTrue);
    sfSprite_setTexture(data.parallax.sprite_6,
        data.parallax.texture_6, sfTrue);
    sfSprite_setTexture(data.parallax.sprite_5,
        data.parallax.texture_5, sfTrue);
    sfSprite_setTexture(data.parallax.sprite_4,
        data.parallax.texture_4, sfTrue);
    sfSprite_setTexture(data.parallax.sprite_3,
        data.parallax.texture_3, sfTrue);
    sfSprite_setTexture(data.parallax.sprite_2,
        data.parallax.texture_2, sfTrue);
    sfSprite_setTexture(data.parallax.sprite_1,
        data.parallax.texture_1, sfTrue);

    return data;
}

void draw_sprites_parallax(data_t data)
{
    sfRenderWindow_drawSprite(data.w_set.window,
        data.parallax.sprite_9, NULL);
    sfRenderWindow_drawSprite(data.w_set.window,
        data.parallax.sprite_8, NULL);
    sfRenderWindow_drawSprite(data.w_set.window,
        data.parallax.sprite_7, NULL);
    sfRenderWindow_drawSprite(data.w_set.window,
        data.parallax.sprite_6, NULL);
    sfRenderWindow_drawSprite(data.w_set.window,
        data.parallax.sprite_5, NULL);
    sfRenderWindow_drawSprite(data.w_set.window,
        data.parallax.sprite_4, NULL);
    sfRenderWindow_drawSprite(data.w_set.window,
        data.parallax.sprite_3, NULL);
    sfRenderWindow_drawSprite(data.w_set.window,
        data.parallax.sprite_2, NULL);
    sfRenderWindow_drawSprite(data.w_set.window,
        data.parallax.sprite_1, NULL);
}
