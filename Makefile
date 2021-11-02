# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/01 16:32:21 by gchanet           #+#    #+#              #
#    Updated: 2021/10/21 10:59:30 by gchanet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BLU 		= \033[0;34m
GRN 		= \033[0;32m
RED 		= \033[0;31m
RST 		= \033[0m

SRC_COLOR	= ft_rgbatoint.c \
				ft_colinterpolate.c
SRC_GET		= ft_get_vec3.c
SRC_GETDRAW	= get_line.c \
				get_rect.c
SRC_IMG		= ft_img_print.c \
				ft_img_putpixel.c \
				ft_img_reset.c
SRC_INIT	= ft_init_vec2.c \
				ft_init_vec2i.c \
				ft_init_vec3.c \
				ft_init_vec3i.c \
				ft_init_vertex.c \
				ft_init_edge.c \
				ft_init_mlx.c
SRC_KEYS	= ft_toggle_keys.c
SRC_MATRIX	= ft_matbzero.c \
				ft_matidentity.c \
				ft_matmulti.c \
				ft_matmultivec.c \
				ft_matrot.c \
				ft_matrotx.c \
				ft_matroty.c \
				ft_matrotz.c \
				ft_matscale.c \
				ft_mattranslate.c
SRC_PRINT	= ft_print_vertex.c \
				ft_print_vec3.c \
				ft_print_vec3i.c
SRC_TO		= ft_vec3tovec3i.c
OBJS		=	${addprefix funcs_color/, 		${SRC_COLOR:.c=.o}} \
				${addprefix funcs_get/, 		${SRC_GET:.c=.o}} \
				${addprefix funcs_getdraw/, 	${SRC_GETDRAW:.c=.o}} \
				${addprefix funcs_img/, 		${SRC_IMG:.c=.o}} \
				${addprefix funcs_init/, 		${SRC_INIT:.c=.o}} \
				${addprefix funcs_keys/, 		${SRC_KEYS:.c=.o}} \
				${addprefix funcs_matrix/, 		${SRC_MATRIX:.c=.o}} \
				${addprefix funcs_print/, 		${SRC_PRINT:.c=.o}} \
				${addprefix funcs_to/, 			${SRC_TO:.c=.o}}
GCC			= gcc
GCC_FLAGS	= -Wall -Wextra -Werror -I. 
LIBX		= -L../libft/ -lft -I ../minilibx
NAME		= lib3d.a

all: ${NAME}

.c.o:
	@${GCC} ${GCC_FLAGS} ${LIBX} -c $< -o ${<:.c=.o} -lm
	@echo "${BLU}[BUILD]${RST} ${<:.c=.o}"

${NAME}: ${OBJS}
	@ar rcs $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "${GRN}[DONE]${RST} $(NAME) has created"

clean:
	@rm -f ${OBJS}
	@echo "${GRN}[CLEAN]${RST} done"

fclean: clean
	@rm -f ${NAME}
	@echo "${GRN}[FCLEAN]${RST} done"

grademe:
	@bash test/grademe.sh

re: fclean all