/*
** EPITECH PROJECT, 2022
** my_csfmllib
** File description:
** create sprite
*/

#include "my_runner.h"

sfSprite *create_sprite(char *path, int x, int y, int pos_bool)
{
    sfVector2f my_pos = {x, y};
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(path, NULL);

    sfSprite_setTexture(sprite, texture, sfTrue);
    if (pos_bool == 1)
        sfSprite_setPosition(sprite, my_pos);
    return sprite;
}
