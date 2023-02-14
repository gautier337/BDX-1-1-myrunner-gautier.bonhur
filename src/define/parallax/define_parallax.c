/*
** EPITECH PROJECT, 2022
** define parallax
** File description:
** my_runner
*/

#include "my_runner.h"

data_t create_sprite_parallax(data_t data)
{
    data.parallax.sprite_9 = sfSprite_create();
    data.parallax.sprite_8 = sfSprite_create();
    data.parallax.sprite_7 = sfSprite_create();
    data.parallax.sprite_6 = sfSprite_create();
    data.parallax.sprite_5 = sfSprite_create();
    data.parallax.sprite_4 = sfSprite_create();
    data.parallax.sprite_3 = sfSprite_create();
    data.parallax.sprite_2 = sfSprite_create();
    data.parallax.sprite_1 = sfSprite_create();

    return data;
}

data_t create_texture_parallax(data_t data)
{
    data.parallax.texture_9 = sfTexture_createFromFile(NINE, NULL);
    data.parallax.texture_8 = sfTexture_createFromFile(EIGHT, NULL);
    data.parallax.texture_7 = sfTexture_createFromFile(SEVEN, NULL);
    data.parallax.texture_6 = sfTexture_createFromFile(SIX, NULL);
    data.parallax.texture_5 = sfTexture_createFromFile(FIVE, NULL);
    data.parallax.texture_4 = sfTexture_createFromFile(FOUR, NULL);
    data.parallax.texture_3 = sfTexture_createFromFile(THREE, NULL);
    data.parallax.texture_2 = sfTexture_createFromFile(TWO, NULL);
    data.parallax.texture_1 = sfTexture_createFromFile(ONE, NULL);

    return data;
}

data_t define_default_position(data_t data)
{
    data.parallax.pos.a = 0;
    data.parallax.pos.b = 0;
    data.parallax.pos.c = 0;
    data.parallax.pos.d = 0;
    data.parallax.pos.e = 0;
    data.parallax.pos.f = 0;
    data.parallax.pos.g = 0;
    data.parallax.pos.h = 0;

    return data;
}

data_t define_parallax(data_t data)
{
    data = create_sprite_parallax(data);
    data = create_texture_parallax(data);
    data = define_default_position(data);
    data = define_texture_parallax(data);

    return data;
}
