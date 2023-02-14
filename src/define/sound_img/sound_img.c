/*
** EPITECH PROJECT, 2022
** sound_img
** File description:
** my_runner
*/

#include "my_runner.h"

void draw_sound(data_t data, int on_off)
{
    sfVector2f my_pos = {50, 50};
    sfVector2f scale = {0.1, 0.1};

    if (on_off == 1)
        sfSprite_setTexture(data.sound.sprite_sound,
        data.sound.texture_sound_on, sfTrue);
    else
        sfSprite_setTexture(data.sound.sprite_sound,
        data.sound.texture_sound_of, sfTrue);
    sfSprite_setScale(data.sound.sprite_sound, scale);
    sfSprite_setPosition(data.sound.sprite_sound, my_pos);
    sfRenderWindow_drawSprite(data.w_set.window,
        data.sound.sprite_sound, NULL);
}

data_t define_sound(data_t data)
{
    data.sound.sprite_sound = sfSprite_create();
    data.sound.texture_sound_on = sfTexture_createFromFile(SOUND_ON, NULL);
    data.sound.texture_sound_of = sfTexture_createFromFile(SOUND_OFF, NULL);

    return data;
}
