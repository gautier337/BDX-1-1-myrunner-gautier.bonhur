/*
** EPITECH PROJECT, 2022
** check_sound_event
** File description:
** my_runner
*/

#include "my_runner.h"

data_t check_sound(data_t data)
{
    if (data.w_set.event.type == sfEvtKeyPressed &&
        data.w_set.event.key.code == sfKeyM && data.sound_bool == 1 &&
        data.pause == 0) {
        data.sound_bool = 0;
        sfMusic_pause(data.music);
    } else if (data.w_set.event.type == sfEvtKeyPressed &&
        data.w_set.event.key.code == sfKeyM && data.sound_bool == 0 &&
        data.pause == 0 && data.win == 0 && data.loose == 0) {
        data.sound_bool = 1;
        sfMusic_play(data.music);
    }
    if (data.pause == 1)
        sfMusic_pause(data.music);
    return data;
}
