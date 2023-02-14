/*
** EPITECH PROJECT, 2022
** check_contact
** File description:
** my_runner
*/

#include "my_runner.h"

data_t check_collision(data_t data)
{
    if ((data.obs.one.x > 150 && data.obs.one.x < 350) && data.tiger.y > 750
        && data.loose != 1 && data.win != 1) {
        sfMusic_play(data.win_img.music);
        data.loose = 1;
    }
    if ((data.obs.two.x > 150 && data.obs.two.x < 350) && data.tiger.y > 750
        && data.loose != 1 && data.win != 1) {
        sfMusic_play(data.win_img.music);
        data.loose = 1;
    }
    if ((data.obs.three.x > 150 && data.obs.three.x < 350)
        && data.tiger.y > 750 && data.loose != 1 && data.win != 1) {
        sfMusic_play(data.win_img.music);
        data.loose = 1;
    }
    return data;
}
