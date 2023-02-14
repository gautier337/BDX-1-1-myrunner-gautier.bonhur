/*
** EPITECH PROJECT, 2021
** my_runner
** File description:
** header
*/

#ifndef MY_RUNNER_H
    #define MY_RUNNER_H

    #include <stdlib.h>
    #include <SFML/Graphics.h>
    #include <SFML/Audio/Export.h>
    #include <SFML/Audio/SoundStatus.h>
    #include <SFML/Audio/Types.h>
    #include <SFML/System/InputStream.h>
    #include <SFML/System/Time.h>
    #include <SFML/System/Vector3.h>
    #include <SFML/Window/Export.h>
    #include <SFML/Window/Joystick.h>
    #include <SFML/Window/Keyboard.h>
    #include <SFML/Window/Mouse.h>
    #include <SFML/Window/Sensor.h>
    #include <SFML/Audio.h>
    #include <stddef.h>
    #include <stdio.h>
    #include "time.h"

    #define WINDOW_NAME "My Runner"
    #define WRONG_RESOLUTION "You entered a bad resolution.\n"

    #define ONE "ressources/parallax/1_Layer1.png"
    #define TWO "ressources/parallax/2_Layer2.png"
    #define THREE "ressources/parallax/3_Layer3.png"
    #define FOUR "ressources/parallax/4_Layer4.png"
    #define FIVE "ressources/parallax/5_Mountains.png"
    #define SIX "ressources/parallax/7_Clouds.png"
    #define SEVEN "ressources/parallax/7_Clouds.png"
    #define EIGHT "ressources/parallax/8_Stars.png"
    #define NINE "ressources/parallax/9_Background.png"

    #define TIGER "ressources/sprites/tiger.png"

    #define SOUND_ON "ressources/music/musicon.png"
    #define SOUND_OFF "ressources/music/musicoff.png"

    #define FPS 144
    #define SCORE_WIN 135

typedef struct w_set {
    sfRenderWindow *window;
    sfEvent event;
} w_set_t;

typedef struct pos {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
} pos_t;

typedef struct obs_bool {
    int bool_one;
    int bool_two;
    int bool_three;
} obs_bool_t;

typedef struct obs_one {
    sfSprite *sprite;
    int x;
    int y;
} obs_one_t;

typedef struct obs_two {
    sfSprite *sprite;
    int x;
    int y;
} obs_two_t;

typedef struct obs_three {
    sfSprite *sprite;
    int x;
    int y;
} obs_three_t;

typedef struct obstacle {
    obs_one_t one;
    obs_two_t two;
    obs_three_t three;
} obstacle_t;

typedef struct tiger_jump {
    sfClock *timer;
    sfTime time;
    sfMusic *music;
    float seconds;
} tiger_jump_t;

typedef struct tiger {
    tiger_jump_t tiger_jump;
    sfSprite *sprite_tiger;
    sfTexture *texture_tiger;
    float x;
    float y;
    sfClock *timer;
    sfTime time;
    float seconds;
    sfIntRect rect;
    sfVector2f scale;
    int space;
} tiger_t;

typedef struct win_img {
    sfSprite *sprite;
    sfSprite *sprite_loose;
    sfMusic *music;
} win_img_t;

typedef struct sound_img {
    sfSprite *sprite_sound;
    sfTexture *texture_sound_on;
    sfTexture *texture_sound_of;
    float x;
    float y;
    sfIntRect rect;
    sfVector2f scale;
} sound_img_t;

typedef struct parallax_c {
    sfClock *timer;
    sfTime time;
    float seconds;
} timep_t;

typedef struct timerr {
    sfClock *timer;
    sfTime time;
    float seconds;
} timerr_t;

typedef struct parallax {
    sfSprite *sprite_9;
    sfSprite *sprite_8;
    sfSprite *sprite_7;
    sfSprite *sprite_6;
    sfSprite *sprite_5;
    sfSprite *sprite_4;
    sfSprite *sprite_3;
    sfSprite *sprite_2;
    sfSprite *sprite_1;
    sfTexture *texture_9;
    sfTexture *texture_8;
    sfTexture *texture_7;
    sfTexture *texture_6;
    sfTexture *texture_5;
    sfTexture *texture_4;
    sfTexture *texture_3;
    sfTexture *texture_2;
    sfTexture *texture_1;
    pos_t pos;
} parallax_t;

typedef struct pause_img {
    sfSprite *sprite;
} pauseimg_t;

typedef struct data {
    w_set_t w_set;
    timerr_t timer;
    parallax_t parallax;
    tiger_t tiger;
    sfMusic *music;
    sfFont *font;
    win_img_t win_img;
    sound_img_t sound;
    pauseimg_t pause_img;
    obstacle_t obs;
    int sound_bool;
    int first_time;
    int score;
    int pause;
    int win;
    int loose;
    int end;
} data_t;

enum type {
    SHOES,
    EDOP,
    EEZ
};

typedef struct game_object {

    enum type type;
    sfVector2f pos;
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;

} game_object_t;

sfSprite *create_sprite(char *path, int x, int y, int pos_bool);
int check_env(char **argvenv);

void my_putchar(char c);
int my_strlen(char const *str);
int lenght_int(int nbr);
void my_putstr(char const *str);
int my_put_nbr(int nb);
int my_strlen (char const *str);
int my_getnbr(char *str);
int check_number(int i, int argc, char **argv);

int display_helper(void);
void my_runner(int argc, char **argv, data_t data, timep_t parallax_time);
void draw_window(data_t data);
void draw_pause(data_t data);
void draw_sprites_tiger(data_t data);
void draw_obstacles(data_t data);
data_t define_tiger(data_t data);

game_object_t *create_object(const char *path_to_spritesheet,
                                sfVector2f pos, sfIntRect rect);
void destroy_object(struct game_object *obj);

data_t define_data(data_t data, int argc, char **argv);
data_t define_resolution(data_t data, int argc, char **argv);
data_t define_display(data_t data);

data_t define_parallax(data_t data);
data_t define_texture_parallax(data_t data);
data_t define_cactus_pos(data_t data);
void draw_sprites_parallax(data_t data);
data_t set_position_parallax(data_t data);
data_t execute_parallax(data_t data, timep_t parallax_time);
timep_t define_timer_p(timep_t parallax_time);
data_t define_timer_t(data_t data);

data_t move_tigger_basic(data_t data);
data_t move_cactus(data_t data);

void check_close(data_t data);
data_t check_collision(data_t data);

data_t define_sound(data_t data);
void draw_sound(data_t data, int on_off);

data_t check_sound(data_t data);
data_t check_space(data_t data);
data_t check_pause(data_t data);
data_t jump_action(data_t data);

data_t draw_win_or_loose(data_t data);
data_t check_win(data_t data);

void draw_text(data_t data);

#endif
