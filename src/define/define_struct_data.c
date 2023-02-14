/*
** EPITECH PROJECT, 2022
** define_window_stuct
** File description:
** my_runner
*/

#include "my_runner.h"

data_t define(data_t data, int argc, char **argv)
{
    data = define_resolution(data, argc, argv);
    data = define_display(data);
    data = define_parallax(data);
    data = define_tiger(data);
    data = define_sound(data);
    data = move_tigger_basic(data);

    return data;
}

data_t define_obstacles(data_t data)
{
    data.obs.one.sprite = create_sprite("ressources/sprites/cactus.png",
        1950, 500, 0);
    data.obs.two.sprite = create_sprite("ressources/sprites/cactus.png",
        2100, 500, 0);
    data.obs.three.sprite = create_sprite("ressources/sprites/cactus.png",
        2600, 500, 0);

    return data;
}

data_t basic_elements(data_t data)
{
    data.first_time = 1;
    data.sound_bool = 1;
    data.score = 0;
    data.win = 0;
    data.loose = 0;
    data.pause = 0;
    data.end = 0;
    sfRenderWindow_setFramerateLimit(data.w_set.window, FPS);
    data.font = sfFont_createFromFile("ressources/font/Speedway.ttf");
    data.win_img.sprite = create_sprite("ressources/sprites/win.png",
        150, 150, 1);
    data.win_img.sprite_loose = create_sprite("ressources/sprites/loose.png",
        150, 150, 1);

    return data;
}

data_t define_music(data_t data)
{
    data.music = sfMusic_createFromFile("ressources/music/sound.ogg");
    data.win_img.music = sfMusic_createFromFile("ressources/music/dead.ogg");
    data.tiger.tiger_jump.music =
        sfMusic_createFromFile("ressources/music/jump.ogg");
    sfMusic_setLoop(data.music, sfTrue);
    sfMusic_play(data.music);

    return data;
}

data_t define_data(data_t data, int argc, char **argv)
{
    data = define(data, argc, argv);
    data = basic_elements(data);
    data = define_obstacles(data);
    data = define_music(data);
    data = define_cactus_pos(data);
    data = move_cactus(data);
    data.tiger.tiger_jump.timer = sfClock_create();
    data.pause_img.sprite = create_sprite("ressources/sprites/pause.png",
        832, 150, 1);

    return data;
}
