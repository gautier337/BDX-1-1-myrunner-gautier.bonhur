/*
** EPITECH PROJECT, 2022
** helper
** File description:
** my_runner
*/

#include "my_runner.h"

int display_helper(void)
{
    my_putstr("Type: ./my_runner to start the game.\n");
    my_putstr("If you want to change the resolution of the game type:");
    my_putstr(" ./my_runner 1280 720 (example).\nPress M to ON/OFF sound.\n");
    my_putstr("Press P to pause/unpause the game.\n");
    my_putstr("Reach 135 to win !\n");
    my_putstr("The file into the folder ressources");
    my_putstr("define where the obstacles start\n");
    return 0;
}
