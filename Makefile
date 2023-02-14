##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Gautier BONHUR
##

NAME			=	my_runner

SRC				=	main.c	\
					src/errors/check_errors.c \
					src/csfml/create_sprite.c \
					ressources/helper.c \
					src/lib/my_put_nbr.c \
					src/lib/my_putchar.c \
					src/lib/my_putstr.c \
					src/lib/my_strlen.c \
					src/lib/my_getnbr.c \
					src/lib/lenght_int.c \
					src/lib/check_number.c \
					src/my_runner.c \
					src/draw_window.c \
					src/define/tiger/define_tiger.c \
					src/define/tiger/move_tiger.c \
					src/define/define_struct_data.c \
					src/define/define_resolution.c \
					src/define/define_timerfps.c \
					src/define/parallax/define_parallax.c \
					src/define/parallax/set_parallax.c \
					src/define/parallax/move_parallax.c \
					src/define/sound_img/sound_img.c \
					src/events/check_sound.c \
					src/events/check_space.c \
					src/events/check_pause.c \
					src/win/check_win.c \
					src/score/draw_text.c \
					src/obstacles/display_obstacles.c \
					src/obstacles/move_cactus.c \
					src/obstacles/check_contact.c

OBJ				=			$(SRC:.c=.o)

CFLAGS 			= 			-I./includes

GRAPHICS 		= -lcsfml-graphics -lcsfml-window -lcsfml-audio -lcsfml-system

all: 			$(NAME)

$(NAME):		$(OBJ)
	gcc -o $(NAME) $(OBJ) $(LDFLAGS) $(GRAPHICS)
	make clean

clean:
	rm -f $(OBJ)
	rm -f *.gcda
	rm -f *.gcno

fclean:			clean
	rm -f $(NAME)

re:			$(NAME)

.PHONY:			clean