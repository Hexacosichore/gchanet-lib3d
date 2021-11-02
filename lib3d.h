/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 10:58:20 by gchanet           #+#    #+#             */
/*   Updated: 2021/10/21 10:58:27 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB3D_H
# define LIB3D_H
# include <math.h>
# include <unistd.h>
# include <stdlib.h>
# include <mlx.h>
# include "keys.h"
# include "../libft/libft.h"

/*	STRUCT	*/
typedef struct s_vec2
{
	double	x;
	double	y;
}				t_vec2;

typedef struct s_vec3
{
	double	x;
	double	y;
	double	z;
}				t_vec3;

typedef struct s_vec2i
{
	int		x;
	int		y;
}				t_vec2i;

typedef struct s_vec3i
{
	int		x;
	int		y;
	int		z;
}				t_vec3i;

typedef struct s_mat
{
	double	x[4];
	double	y[4];
	double	z[4];
	double	w[4];
}				t_mat;

typedef struct s_vertex {
	t_vec3		*local;
	t_vec3		*world;
	t_vec3		*aligned;
	t_vec3		*projected;
}				t_vertex;

typedef struct s_face
{
	t_vertex	p[3];
}				t_face;

typedef struct s_mesh
{
	t_face		**tris;
}				t_mesh;

typedef struct s_edge {
	t_vec3i	v0;
	t_vec3i	v1;
	t_vec2i	d;
	t_vec2i	s;
}				t_edge;

typedef struct s_rgba
{
	unsigned int	r:8;
	unsigned int	g:8;
	unsigned int	b:8;
	unsigned int	a:8;
}				t_rgba;

typedef struct s_data {
	void	*img;
	char	*addr;
	int		bpp;
	int		line_length;
	int		endian;
}				t_data;

typedef struct s_transform
{
	t_vec3		position;
	t_vec3		rotation;
	t_vec3		scale;
}				t_transform;

typedef struct s_cam
{
	float	near;
	float	far;
	float	fov;
	float	fov_rad;
	float	aspect_ratio;
	t_mat	mat_proj;
}				t_cam;

typedef struct s_mlx
{
	t_data		img;
	void		*mlx_ptr;
	void		*win_ptr;
	t_transform	transform;
	t_keys		*keys;
	t_cam		*cam;
}				t_mlx;

typedef enum e_icolor
{
	c_white		= 0xFFFFFFFF,
	c_red		= 0xFFFF0000,
	c_green		= 0xFF00FF00,
	c_blue		= 0xFF0000FF,
	c_black		= 0xFF000000,
	c_black_1	= 0xFF010101,
	c_black_2	= 0xFF020202,
	c_black_3	= 0xFF030303,
	c_black_4	= 0xFF040404,
}				t_icolor;

/*	COLOR	*/
int			ft_rgbatoint(t_rgba color);
int			ft_colinterpolate(int color1, int color2, double purcent);

/*	GET	*/
t_vec3		ft_get_vec3(float x, float y, float z);

/*	GET_DRAW	*/
void		get_line(t_vec3 p0, t_vec3 p1, void (*f)(t_vec3, void *), void *p);
void		get_rect(t_vec2i o, t_vec2i s, void (*f)(t_vec2i, void *), void *p);

/*	IMG	*/
void		ft_img_reset(t_mlx *mlx, int size_x, int size_y);
void		ft_img_putpixel(t_data *img, int x, int y, int color);
void		ft_img_print(t_mlx *mlx);

/*	INIT	*/
t_mlx		*ft_init_mlx(int size_x, int size_y, char *name);
t_vec2		*ft_init_vec2(float x, float y);
t_vec2i		*ft_init_vec2i(int x, int y);
t_vec3		*ft_init_vec3(float x, float y, float z);
t_vec3i		*ft_init_vec3i(int x, int y, int z);
t_vertex	*ft_init_vertex(double x, double y, double z);
t_edge		*ft_init_edge(t_vec3 v1, t_vec3 v2);

/*	KEYS	*/
void		toggle_keys(int keycode, t_mlx *root, int toggle);

/*	MATRIX	*/
void		ft_matbzero(t_mat *mat);
void		ft_matidentity(t_mat *mat);
void		ft_matmulti(t_mat m1, t_mat m2, t_mat *dst);
void		ft_matrot(t_mat *mat, t_vec3 rotation);
void		ft_matrotx(t_mat *mat, double theta);
void		ft_matroty(t_mat *mat, double phi);
void		ft_matrotz(t_mat *mat, double psi);
void		ft_matscale(t_mat *mat, t_vec3 scale);
void		ft_mattranslate(t_mat *mat, t_vec3 position);
void		ft_matmultivec(t_vec3 src, t_mat mat, t_vec3 *dst);

/*	PRINT	*/
void		ft_print_vertex(t_vertex vertex);
void		ft_print_vec3i(t_vec3i vec3);
void		ft_print_vec3(t_vec3 vec3);

/*	TO	*/
t_vec3i		ft_vec3tovec3int(t_vec3 vec3);

#endif