/*
** EPITECH PROJECT, 2022
** check_space.c
** File description:
** my_runner
*/

#include "my_runner.h"

data_t jump_action(data_t data)
{
    data.tiger.tiger_jump.time = sfClock_getElapsedTime(
        data.tiger.tiger_jump.timer);
    data.tiger.tiger_jump.seconds =
        data.tiger.tiger_jump.time.microseconds / 1000000.0;

    if (data.tiger.space == 1 && data.tiger.tiger_jump.seconds < 0.8) {
        if (data.tiger.tiger_jump.seconds < 0.4)
            data.tiger.y -= 3;
        else
            data.tiger.y += 3;
    } else if (data.tiger.tiger_jump.seconds > 0.8) {
        data.tiger.y = 807.5;
        data.tiger.space = 0;
    }
    return data;
}

data_t check_space(data_t data)
{
    if (data.w_set.event.type == sfEvtKeyPressed &&
        data.w_set.event.key.code == sfKeySpace
        && data.pause == 0 && data.win == 0 && data.loose == 0) {
        if (data.tiger.space == 0) {
            sfMusic_stop(data.tiger.tiger_jump.music);
            sfMusic_play(data.tiger.tiger_jump.music);
            sfClock_restart(data.tiger.tiger_jump.timer);
            data.tiger.space = 1;
        }
    }
    return data;
}
