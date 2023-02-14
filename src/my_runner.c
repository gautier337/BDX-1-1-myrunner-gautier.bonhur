/*
** EPITECH PROJECT, 2021
** my_runner.c
** File description:
** my_runner
*/

#include "my_runner.h"

void destroy_two(data_t data)
{
    sfSprite_destroy(data.obs.one.sprite);
    sfSprite_destroy(data.obs.two.sprite);
    sfSprite_destroy(data.obs.three.sprite);
    sfSprite_destroy(data.win_img.sprite);
    sfMusic_destroy(data.tiger.tiger_jump.music);
    sfMusic_destroy(data.music);
    sfMusic_destroy(data.win_img.music);
    sfRenderWindow_destroy(data.w_set.window);
}

void destroy_all(data_t data)
{
    sfSprite_destroy(data.parallax.sprite_1);
    sfSprite_destroy(data.parallax.sprite_2);
    sfSprite_destroy(data.parallax.sprite_3);
    sfSprite_destroy(data.parallax.sprite_4);
    sfSprite_destroy(data.parallax.sprite_5);
    sfSprite_destroy(data.parallax.sprite_6);
    sfSprite_destroy(data.parallax.sprite_7);
    sfSprite_destroy(data.parallax.sprite_8);
    sfSprite_destroy(data.parallax.sprite_9);
    sfSprite_destroy(data.tiger.sprite_tiger);
    destroy_two(data);
}

data_t check_event(data_t data)
{
    data = jump_action(data);
    data = check_win(data);
    data = define_timer_t(data);
    while (sfRenderWindow_pollEvent(data.w_set.window, &data.w_set.event)) {
        if (data.w_set.event.type == sfEvtClosed) {
            sfRenderWindow_close(data.w_set.window);
        }
        if (data.w_set.event.type == sfEvtKeyPressed &&
            data.w_set.event.key.code == sfKeyEscape) {
            sfRenderWindow_close(data.w_set.window);
        }
        data = check_pause(data);
        data = check_sound(data);
        data = check_space(data);
    }
    return data;
}

data_t display(data_t data)
{
    data.timer.time = sfClock_getElapsedTime(data.timer.timer);
    data.timer.seconds = data.timer.time.microseconds / 1000000.0;
    if (data.timer.seconds > 1 / FPS || data.first_time == 1) {
        draw_window(data);
        sfClock_restart(data.timer.timer);
        data.first_time = 0;
    }
    return data;
}

void my_runner(int argc, char **argv, data_t data, timep_t parallax_time)
{
    while (sfRenderWindow_isOpen(data.w_set.window)) {
        data = check_event(data);
        parallax_time = define_timer_p(parallax_time);
        if (parallax_time.seconds > 0.02 && data.pause == 0) {
            sfClock_restart(parallax_time.timer);
            data = set_position_parallax(data);
            data = move_cactus(data);
        }
        if (data.tiger.seconds > 0.1 && data.pause == 0) {
            sfClock_restart(data.tiger.timer);
            data = move_tigger_basic(data);
            data = move_cactus(data);
            data = check_collision(data);
            data.score += 1;
        }
        data = display(data);
    }
    destroy_all(data);
}
