/*
** EPITECH PROJECT, 2021
** create_object
** File description:
** my_runner
*/

#include "my_runner.h"

game_object_t *create_object(const char *path_to_spritesheet,
                                sfVector2f pos, sfIntRect rect)
{
    game_object_t *game_object;

    game_object->sprite = sfSprite_create();
    game_object->texture = sfTexture_createFromFile(path_to_spritesheet, NULL);
    game_object->pos = pos;
    game_object->rect = rect;

    return game_object;
}

void destroy_object(struct game_object *obj)
{
    sfSprite_destroy(obj->sprite);
}
