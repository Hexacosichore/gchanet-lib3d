/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toggle_keys.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:24:30 by gchanet           #+#    #+#             */
/*   Updated: 2021/10/18 21:28:22 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib3d.h"

static int	toggle_keys_letter(int keycode, t_mlx *root, int toggle)
{
	if (keycode == KEY_A)
		root->keys->k_a = toggle;
	else if (keycode == KEY_B)
		root->keys->k_b = toggle;
	else if (keycode == KEY_C)
		root->keys->k_c = toggle;
	else if (keycode == KEY_D)
		root->keys->k_d = toggle;
	else if (keycode == KEY_E)
		root->keys->k_e = toggle;
	else if (keycode == KEY_F)
		root->keys->k_f = toggle;
	else if (keycode == KEY_G)
		root->keys->k_g = toggle;
	else if (keycode == KEY_H)
		root->keys->k_h = toggle;
	else if (keycode == KEY_I)
		root->keys->k_i = toggle;
	else if (keycode == KEY_J)
		root->keys->k_j = toggle;
	else if (keycode == KEY_K)
		root->keys->k_k = toggle;
	else if (keycode == KEY_L)
		root->keys->k_l = toggle;
	else if (keycode == KEY_M)
		root->keys->k_m = toggle;
	else if (keycode == KEY_N)
		root->keys->k_n = toggle;
	else if (keycode == KEY_O)
		root->keys->k_o = toggle;
	else if (keycode == KEY_P)
		root->keys->k_p = toggle;
	else if (keycode == KEY_Q)
		root->keys->k_q = toggle;
	else if (keycode == KEY_R)
		root->keys->k_r = toggle;
	else if (keycode == KEY_S)
		root->keys->k_s = toggle;
	else if (keycode == KEY_T)
		root->keys->k_t = toggle;
	else if (keycode == KEY_U)
		root->keys->k_u = toggle;
	else if (keycode == KEY_V)
		root->keys->k_v = toggle;
	else if (keycode == KEY_W)
		root->keys->k_w = toggle;
	else if (keycode == KEY_X)
		root->keys->k_x = toggle;
	else if (keycode == KEY_Y)
		root->keys->k_y = toggle;
	else if (keycode == KEY_Z)
		root->keys->k_z = toggle;
	else
		return (0);
	return (1);
}

static int	toggle_keys_keypad(int keycode, t_mlx *root, int toggle)
{
	if (keycode == KEY_KEYPAD0)
		root->keys->k_keypad0 = toggle;
	else if (keycode == KEY_KEYPAD1)
		root->keys->k_keypad1 = toggle;
	else if (keycode == KEY_KEYPAD2)
		root->keys->k_keypad2 = toggle;
	else if (keycode == KEY_KEYPAD3)
		root->keys->k_keypad3 = toggle;
	else if (keycode == KEY_KEYPAD4)
		root->keys->k_keypad4 = toggle;
	else if (keycode == KEY_KEYPAD5)
		root->keys->k_keypad5 = toggle;
	else if (keycode == KEY_KEYPAD6)
		root->keys->k_keypad6 = toggle;
	else if (keycode == KEY_KEYPAD7)
		root->keys->k_keypad7 = toggle;
	else if (keycode == KEY_KEYPAD8)
		root->keys->k_keypad8 = toggle;
	else if (keycode == KEY_KEYPAD9)
		root->keys->k_keypad9 = toggle;
	else if (keycode == KEY_KEYPADPERIOD)
		root->keys->k_keypadperiod = toggle;
	else if (keycode == KEY_KEYPADDIVIDE)
		root->keys->k_keypaddivide = toggle;
	else if (keycode == KEY_KEYPADMULTIPLY)
		root->keys->k_keypadmultiply = toggle;
	else if (keycode == KEY_KEYPADMINUS)
		root->keys->k_keypadminus = toggle;
	else if (keycode == KEY_KEYPADPLUS)
		root->keys->k_keypadplus = toggle;
	else if (keycode == KEY_KEYPADENTER)
		root->keys->k_keypadenter = toggle;
	else
		return (0);
	return (1);
}

void	toggle_keys(int keycode, t_mlx *root, int toggle)
{
	if (toggle_keys_letter(keycode, root, toggle))
		return ;
	if (toggle_keys_keypad(keycode, root, toggle))
		return ;
	else if (keycode == KEY_BACKSPACE)
		root->keys->k_backspace = toggle;
	else if (keycode == KEY_DELETE)
		root->keys->k_delete = toggle;
	else if (keycode == KEY_TAB)
		root->keys->k_tab = toggle;
	else if (keycode == KEY_RETURN)
		root->keys->k_return = toggle;
	else if (keycode == KEY_PAUSE)
		root->keys->k_pause = toggle;
	else if (keycode == KEY_ESCAPE)
		root->keys->k_escape = toggle;
	else if (keycode == KEY_SPACE)
		root->keys->k_space = toggle;
	else if (keycode == KEY_UPARROW)
		root->keys->k_uparrow = toggle;
	else if (keycode == KEY_DOWNARROW)
		root->keys->k_downarrow = toggle;
	else if (keycode == KEY_RIGHTARROW)
		root->keys->k_rightarrow = toggle;
	else if (keycode == KEY_LEFTARROW)
		root->keys->k_leftarrow = toggle;
	else if (keycode == KEY_INSERT)
		root->keys->k_insert = toggle;
	else if (keycode == KEY_HOME)
		root->keys->k_home = toggle;
	else if (keycode == KEY_END)
		root->keys->k_end = toggle;
	else if (keycode == KEY_PAGEUP)
		root->keys->k_pageup = toggle;
	else if (keycode == KEY_PAGEDOWN)
		root->keys->k_pagedown = toggle;
	else if (keycode == KEY_F1)
		root->keys->k_f1 = toggle;
	else if (keycode == KEY_F2)
		root->keys->k_f2 = toggle;
	else if (keycode == KEY_F3)
		root->keys->k_f3 = toggle;
	else if (keycode == KEY_F4)
		root->keys->k_f4 = toggle;
	else if (keycode == KEY_F5)
		root->keys->k_f5 = toggle;
	else if (keycode == KEY_F6)
		root->keys->k_f6 = toggle;
	else if (keycode == KEY_F7)
		root->keys->k_f7 = toggle;
	else if (keycode == KEY_F8)
		root->keys->k_f8 = toggle;
	else if (keycode == KEY_F9)
		root->keys->k_f9 = toggle;
	else if (keycode == KEY_F10)
		root->keys->k_f10 = toggle;
	else if (keycode == KEY_F11)
		root->keys->k_f11 = toggle;
	else if (keycode == KEY_F12)
		root->keys->k_f12 = toggle;
	else if (keycode == KEY_ALPHA0)
		root->keys->k_alpha0 = toggle;
	else if (keycode == KEY_ALPHA1)
		root->keys->k_alpha1 = toggle;
	else if (keycode == KEY_ALPHA2)
		root->keys->k_alpha2 = toggle;
	else if (keycode == KEY_ALPHA3)
		root->keys->k_alpha3 = toggle;
	else if (keycode == KEY_ALPHA4)
		root->keys->k_alpha4 = toggle;
	else if (keycode == KEY_ALPHA5)
		root->keys->k_alpha5 = toggle;
	else if (keycode == KEY_ALPHA6)
		root->keys->k_alpha6 = toggle;
	else if (keycode == KEY_ALPHA7)
		root->keys->k_alpha7 = toggle;
	else if (keycode == KEY_ALPHA8)
		root->keys->k_alpha8 = toggle;
	else if (keycode == KEY_ALPHA9)
		root->keys->k_alpha9 = toggle;
	else if (keycode == KEY_QUOTE)
		root->keys->key_quote = toggle;
	else if (keycode == KEY_COMMA)
		root->keys->key_comma = toggle;
	else if (keycode == KEY_MINUS)
		root->keys->key_minus = toggle;
	else if (keycode == KEY_PERIOD)
		root->keys->key_period = toggle;
	else if (keycode == KEY_SLASH)
		root->keys->key_slash = toggle;
	else if (keycode == KEY_SEMICOLON)
		root->keys->key_semicolon = toggle;
	else if (keycode == KEY_EQUALS)
		root->keys->key_equals = toggle;
	else if (keycode == KEY_LEFTBRACKET)
		root->keys->key_leftbracket = toggle;
	else if (keycode == KEY_BACKSLASH)
		root->keys->key_backslash = toggle;
	else if (keycode == KEY_RIGHTBRACKET)
		root->keys->key_rightbracket = toggle;
	else if (keycode == KEY_LEFTCULYBRACKET)
		root->keys->k_leftculybracket = toggle;
	else if (keycode == KEY_PIPE)
		root->keys->k_pipe = toggle;
	else if (keycode == KEY_RIGHTCURLYBRACKET)
		root->keys->k_rightcurlybracket = toggle;
	else if (keycode == KEY_TILDE)
		root->keys->k_tilde = toggle;
	else if (keycode == KEY_NUMLOCK)
		root->keys->k_numlock = toggle;
	else if (keycode == KEY_CAPSLOCK)
		root->keys->k_capslock = toggle;
	else if (keycode == KEY_SCROLLLOCK)
		root->keys->k_scrolllock = toggle;
	else if (keycode == KEY_RIGHTSHIFT)
		root->keys->k_rightshift = toggle;
	else if (keycode == KEY_LEFTSHIFT)
		root->keys->k_leftshift = toggle;
	else if (keycode == KEY_RIGHTCONTROL)
		root->keys->k_rightcontrol = toggle;
	else if (keycode == KEY_LEFTCONTROL)
		root->keys->k_leftcontrol = toggle;
	else if (keycode == KEY_RIGHTALT)
		root->keys->k_rightalt = toggle;
	else if (keycode == KEY_LEFTALT)
		root->keys->k_leftalt = toggle;
	else if (keycode == KEY_ALTGR)
		root->keys->k_altgr = toggle;
}
