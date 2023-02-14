/*
** EPITECH PROJECT, 2022
** draw_text
** File description:
** my_runner
*/

#include "my_runner.h"

char *my_strcat(char *src, char *dest)
{
    int len_src = my_strlen(src);
    int i;
    char *tmp = src;
    char *new = malloc(my_strlen(dest) + my_strlen(src) + 1);

    for (int x = 0; x < len_src; x++)
        new[x] = tmp[x];
    i = 0;
    while (dest[i] != '\0') {
        new[len_src + i] = dest[i];
        i++;
    }
    new[len_src + i] = '\0';
    return new;
}

char *convert_int(int nb)
{
    char *str = malloc(lenght_int(nb));
    int i = 1;
    int j = 0;

    if (nb < 0) {
        str[0] = ('-');
        convert_int(nb * -1);
        return 0;
    }
    for (int a = nb; a > 9;) {
        a = a / 10;
        i = i * 10;
    }
    while (i >= 1) {
        str[j] = (((nb / i) % 10) + '0');
        i = i / 10;
        j += 1;
    }
    str[j] = '\0';
    return str;
}

char *int_in_string(int nbr)
{
    return convert_int(nbr);
}

void draw_text(data_t data)
{
    sfText *text;
    sfVector2f my_pos = {1500, 50};

    text = sfText_create();
    sfText_setString(text, my_strcat(
        "SCORE: ", int_in_string(data.score)));
    sfText_setFont(text, data.font);
    sfText_setCharacterSize(text, 50);
    sfText_setPosition(text, my_pos);
    sfRenderWindow_drawText(data.w_set.window, text, NULL);
    if (data.win == 1)
        sfText_destroy(text);
}
