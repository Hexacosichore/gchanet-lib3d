/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 13:24:12 by gchanet           #+#    #+#             */
/*   Updated: 2021/10/18 21:06:27 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KEYS_H
# define KEYS_H

# define KEY_BACKSPACE 			65288	//The backspace key.
# define KEY_DELETE				65535	//The forward delete key.
# define KEY_TAB 				65289	//The tab key.
# define KEY_RETURN				65293	//Return key.
# define KEY_PAUSE 				65507	//Pause on PC machines.
# define KEY_ESCAPE 			65307	//Escape key.
# define KEY_SPACE 				32		//Space key.
# define KEY_KEYPAD0			65438	//Numeric keypad 0.
# define KEY_KEYPAD1			65436	//Numeric keypad 1.
# define KEY_KEYPAD2			65433	//Numeric keypad 2.
# define KEY_KEYPAD3			65435	//Numeric keypad 3.
# define KEY_KEYPAD4			65430	//Numeric keypad 4.
# define KEY_KEYPAD5			65437	//Numeric keypad 5.
# define KEY_KEYPAD6			65432	//Numeric keypad 6.
# define KEY_KEYPAD7			65429	//Numeric keypad 7.
# define KEY_KEYPAD8			65431	//Numeric keypad 8.
# define KEY_KEYPAD9			65434	//Numeric keypad 9.
# define KEY_KEYPADPERIOD		65439	//Numeric keypad '.'.
# define KEY_KEYPADDIVIDE		65455	//Numeric keypad '/'.
# define KEY_KEYPADMULTIPLY		65450	//Numeric keypad '*'.
# define KEY_KEYPADMINUS		65453	//Numeric keypad '-'.
# define KEY_KEYPADPLUS			65451	//Numeric keypad '+'.
# define KEY_KEYPADENTER		65421	//Numeric keypad Enter.
# define KEY_UPARROW			65362	//Up arrow key.
# define KEY_DOWNARROW			65364	//Down arrow key.
# define KEY_RIGHTARROW			65363	//Right arrow key.
# define KEY_LEFTARROW			65361	//Left arrow key.
# define KEY_INSERT				65379	//Insert key key.
# define KEY_HOME				65360	//Home key.
# define KEY_END				65367	//End key.
# define KEY_PAGEUP				65365	//Page up.
# define KEY_PAGEDOWN			65366	//Page down.
# define KEY_F1					65470	//F1 function key.
# define KEY_F2					65471	//F2 function key.
# define KEY_F3					65472	//F3 function key.
# define KEY_F4					65473	//F4 function key.
# define KEY_F5					65474	//F5 function key.
# define KEY_F6					65475	//F6 function key.
# define KEY_F7					65476	//F7 function key.
# define KEY_F8					65477	//F8 function key.
# define KEY_F9					65478	//F9 function key.
# define KEY_F10				65479	//F10 function key.
# define KEY_F11				65480	//F11 function key.
# define KEY_F12				65481	//F12 function key.
# define KEY_ALPHA0				48		//The '0' key on the alphanum keyboard.
# define KEY_ALPHA1				49		//The '1' key on the alphanum keyboard.
# define KEY_ALPHA2				50		//The '2' key on the alphanum keyboard.
# define KEY_ALPHA3				51		//The '3' key on the alphanum keyboard.
# define KEY_ALPHA4				52		//The '4' key on the alphanum keyboard.
# define KEY_ALPHA5				53		//The '5' key on the alphanum keyboard.
# define KEY_ALPHA6				54		//The '6' key on the alphanum keyboard.
# define KEY_ALPHA7				55		//The '7' key on the alphanum keyboard.
# define KEY_ALPHA8				56		//The '8' key on the alphanum keyboard.
# define KEY_ALPHA9				57		//The '9' key on the alphanum keyboard.
# define KEY_QUOTE				39		//Quote key '.
# define KEY_COMMA				44		//Comma ',' key.
# define KEY_MINUS				45		//Minus '-' key.
# define KEY_PERIOD				46		//Period '.' key.
# define KEY_SLASH				47		//Slash '/' key.
# define KEY_SEMICOLON			59		//Semicolon ';' key.
# define KEY_EQUALS				61		//Equals '=' key.
# define KEY_LEFTBRACKET		91		//Left square bracket key '['.
# define KEY_BACKSLASH			92		//Backslash key '\'.
# define KEY_RIGHTBRACKET		93		//Right square bracket key ']'.
# define KEY_A					97		//'a' key.
# define KEY_B					98		//'b' key.
# define KEY_C					99		//'c' key.
# define KEY_D					100		//'d' key.
# define KEY_E					101		//'e' key.
# define KEY_F					102		//'f' key.
# define KEY_G					103		//'g' key.
# define KEY_H					104		//'h' key.
# define KEY_I					105		//'i' key.
# define KEY_J					106		//'j' key.
# define KEY_K					107		//'k' key.
# define KEY_L					108		//'l' key.
# define KEY_M					109		//'m' key.
# define KEY_N					110		//'n' key.
# define KEY_O					111		//'o' key.
# define KEY_P					112		//'p' key.
# define KEY_Q					113		//'q' key.
# define KEY_R					114		//'r' key.
# define KEY_S					115		//'s' key.
# define KEY_T					116		//'t' key.
# define KEY_U					117		//'u' key.
# define KEY_V					118		//'v' key.
# define KEY_W					119		//'w' key.
# define KEY_X					120		//'x' key.
# define KEY_Y					121		//'y' key.
# define KEY_Z					122		//'z' key.
# define KEY_LEFTCULYBRACKET	91		//Left curly bracket key '{'.
# define KEY_PIPE				92		//Pipe '|' key.
# define KEY_RIGHTCURLYBRACKET	93		//Right curly bracket key '}'.
# define KEY_TILDE				96		//Tilde '~' key.
# define KEY_NUMLOCK			65407	//Numlock key.
# define KEY_CAPSLOCK			65509	//Capslock key.
# define KEY_SCROLLLOCK			65300	//Scroll lock key.
# define KEY_RIGHTSHIFT			65506	//Right shift key.
# define KEY_LEFTSHIFT			65505	//Left shift key.
# define KEY_RIGHTCONTROL		65508	//Right Control key.
# define KEY_LEFTCONTROL		65507	//Left Control key.
# define KEY_RIGHTALT			65514	//Right Alt key.
# define KEY_LEFTALT			65513	//Left Alt key.
# define KEY_ALTGR				65514	//Alt Gr key.

typedef struct s_keys
{
	int	k_backspace:1;
	int	k_delete:1;
	int	k_tab:1;
	int	k_return:1;
	int	k_pause:1;
	int	k_escape:1;
	int	k_space:1;
	int	k_keypad0:1;
	int	k_keypad1:1;
	int	k_keypad2:1;
	int	k_keypad3:1;
	int	k_keypad4:1;
	int	k_keypad5:1;
	int	k_keypad6:1;
	int	k_keypad7:1;
	int	k_keypad8:1;
	int	k_keypad9:1;
	int	k_keypadperiod:1;
	int	k_keypaddivide:1;
	int	k_keypadmultiply:1;
	int	k_keypadminus:1;
	int	k_keypadplus:1;
	int	k_keypadenter:1;
	int	k_uparrow:1;
	int	k_downarrow:1;
	int	k_rightarrow:1;
	int	k_leftarrow:1;
	int	k_insert:1;
	int	k_home:1;
	int	k_end:1;
	int	k_pageup:1;
	int	k_pagedown:1;
	int	k_f1:1;
	int	k_f2:1;
	int	k_f3:1;
	int	k_f4:1;
	int	k_f5:1;
	int	k_f6:1;
	int	k_f7:1;
	int	k_f8:1;
	int	k_f9:1;
	int	k_f10:1;
	int	k_f11:1;
	int	k_f12:1;
	int	k_alpha0:1;
	int	k_alpha1:1;
	int	k_alpha2:1;
	int	k_alpha3:1;
	int	k_alpha4:1;
	int	k_alpha5:1;
	int	k_alpha6:1;
	int	k_alpha7:1;
	int	k_alpha8:1;
	int	k_alpha9:1;
	int	key_quote:1;				
	int	key_comma:1;				
	int	key_minus:1;				
	int	key_period:1;				
	int	key_slash:1;				
	int	key_semicolon:1;			
	int	key_equals:1;				
	int	key_leftbracket:1;		
	int	key_backslash:1;			
	int	key_rightbracket:1;		
	int	k_a:1;
	int	k_b:1;
	int	k_c:1;
	int	k_d:1;
	int	k_e:1;
	int	k_f:1;
	int	k_g:1;
	int	k_h:1;
	int	k_i:1;
	int	k_j:1;
	int	k_k:1;
	int	k_l:1;
	int	k_m:1;
	int	k_n:1;
	int	k_o:1;
	int	k_p:1;
	int	k_q:1;
	int	k_r:1;
	int	k_s:1;
	int	k_t:1;
	int	k_u:1;
	int	k_v:1;
	int	k_w:1;
	int	k_x:1;
	int	k_y:1;
	int	k_z:1;
	int	k_leftculybracket:1;
	int	k_pipe:1;
	int	k_rightcurlybracket:1;
	int	k_tilde:1;
	int	k_numlock:1;
	int	k_capslock:1;
	int	k_scrolllock:1;
	int	k_rightshift:1;
	int	k_leftshift:1;
	int	k_rightcontrol:1;
	int	k_leftcontrol:1;
	int	k_rightalt:1;
	int	k_leftalt:1;
	int	k_altgr:1;
}		t_keys;

#endif