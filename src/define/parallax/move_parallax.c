/*
** EPITECH PROJECT, 2022
** move_parallax
** File description:
** my_runner
*/

#include "my_runner.h"

data_t check_position(data_t data)
{
    data.parallax.pos.a = (data.parallax.pos.a <= -1920) ? 0 :
        data.parallax.pos.a;
    data.parallax.pos.b = (data.parallax.pos.b <= -1920) ? 0 :
        data.parallax.pos.b;
    data.parallax.pos.c = (data.parallax.pos.c <= -1920) ? 0 :
        data.parallax.pos.c;
    data.parallax.pos.d = (data.parallax.pos.d <= -1920) ? 0 :
        data.parallax.pos.d;
    data.parallax.pos.e = (data.parallax.pos.e <= -1920) ? 0 :
        data.parallax.pos.e;
    data.parallax.pos.f = (data.parallax.pos.f <= -1920) ? 0 :
        data.parallax.pos.f;
    data.parallax.pos.g = (data.parallax.pos.g <= -1920) ? 0 :
        data.parallax.pos.g;
    data.parallax.pos.h = (data.parallax.pos.h <= -1920) ? 0 :
        data.parallax.pos.h;
    return data;
}

data_t reduce_position(data_t data)
{
    data.parallax.pos.a -= 10;
    data.parallax.pos.b -= 5;
    data.parallax.pos.c -= 3;
    data.parallax.pos.d -= 2;
    data.parallax.pos.e -= 1;
    data.parallax.pos.f -= 1;
    data.parallax.pos.g -= 1;
    data.parallax.pos.h -= 1;

    return data;
}

data_t set_position_parallax(data_t data)
{
    sfVector2f my_posa = {data.parallax.pos.a, 0};
    sfVector2f my_posb = {data.parallax.pos.b, 0};
    sfVector2f my_posc = {data.parallax.pos.c, 0};
    sfVector2f my_posd = {data.parallax.pos.d, 0};
    sfVector2f my_pose = {data.parallax.pos.e, 0};
    sfVector2f my_posf = {data.parallax.pos.f, 0};
    sfVector2f my_posg = {data.parallax.pos.g, 0};
    sfVector2f my_posh = {data.parallax.pos.h, 0};
    data = check_position(data);
    data = reduce_position(data);
    sfSprite_setPosition(data.parallax.sprite_1, my_posa);
    sfSprite_setPosition(data.parallax.sprite_2, my_posb);
    sfSprite_setPosition(data.parallax.sprite_3, my_posc);
    sfSprite_setPosition(data.parallax.sprite_4, my_posd);
    sfSprite_setPosition(data.parallax.sprite_5, my_pose);
    sfSprite_setPosition(data.parallax.sprite_6, my_posf);
    sfSprite_setPosition(data.parallax.sprite_7, my_posg);
    sfSprite_setPosition(data.parallax.sprite_8, my_posh);

    return data;
}

timep_t define_timer_p(timep_t parallax_time)
{
    parallax_time.time = sfClock_getElapsedTime(parallax_time.timer);
    parallax_time.seconds = parallax_time.time.microseconds / 1000000.0;

    return parallax_time;
}
