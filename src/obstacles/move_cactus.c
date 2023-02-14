/*
** EPITECH PROJECT, 2022
** move_obstacles
** File description:
** my_runner
*/

#include "my_runner.h"

data_t define_cactus_pos(data_t data)
{
    data.obs.one.x = 1950;
    data.obs.one.y = 885;
    data.obs.two.x = 2800;
    data.obs.two.y = 885;
    data.obs.three.x = 3500;
    data.obs.three.y = 885;
    return data;
}

data_t check_pos_cactus(data_t data)
{
    if (data.obs.one.x < -100)
        data.obs.one.x = 1950;
    if (data.obs.two.x < -800)
        data.obs.two.x = 2300;
    if (data.obs.three.x < -1200)
        data.obs.three.x = 2600;
    return data;
}

data_t move_cactus(data_t data)
{
    sfVector2f scale = {0.14, 0.14};
    sfVector2f pos_one = {data.obs.one.x, data.obs.one.y};
    sfVector2f pos_two = {data.obs.two.x, data.obs.two.y};
    sfVector2f pos_three = {data.obs.three.x, data.obs.three.y};

    data = check_pos_cactus(data);
    data.obs.one.x -= 13;
    data.obs.two.x -= 13;
    data.obs.three.x -= 13;

    sfSprite_setScale(data.obs.one.sprite, scale);
    sfSprite_setPosition(data.obs.one.sprite, pos_one);

    sfSprite_setScale(data.obs.two.sprite, scale);
    sfSprite_setPosition(data.obs.two.sprite, pos_two);

    sfSprite_setScale(data.obs.three.sprite, scale);
    sfSprite_setPosition(data.obs.three.sprite, pos_three);

    return data;
}
