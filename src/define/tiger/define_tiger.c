/*
** EPITECH PROJECT, 2022
** define tiger
** File description:
** my_runner
*/

#include "my_runner.h"

data_t create_tiger(data_t data)
{
    data.tiger.sprite_tiger = sfSprite_create();
    data.tiger.texture_tiger = sfTexture_createFromFile(TIGER, NULL);
    sfSprite_setTexture(data.tiger.sprite_tiger,
        data.tiger.texture_tiger, sfTrue);

    return data;
}

void draw_sprites_tiger(data_t data)
{
    sfRenderWindow_drawSprite(data.w_set.window,
        data.tiger.sprite_tiger, NULL);
}

data_t define_tiger(data_t data)
{
    data = create_tiger(data);
    data.tiger.timer = sfClock_create();
    data.tiger.x = 250;
    data.tiger.y = 807.5;
    data.tiger.rect.height = 139;
    data.tiger.rect.left = -9;
    data.tiger.rect.width = 95;
    data.tiger.rect.top = 0;
    data.tiger.scale.x = 1.5;
    data.tiger.scale.y = 1.5;
    data.tiger.space = 0;

    return data;
}
