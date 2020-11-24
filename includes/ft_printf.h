/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlongfel <dlongfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 23:17:21 by skennith          #+#    #+#             */
/*   Updated: 2020/08/11 12:39:26 by dlongfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

# define SYMBOLSINFS "1234567890.+-#* lhL"
# define TYPESPF "%cdifosuxXp"
# define FLAGSPF "+#0 -"
# define WIDTHANDACCURACY "0123456789*"
# define SIZEPF "lhL"

typedef struct		s_size
{
	int				l;
	int				ll;
	int				h;
	int				hh;
	int				big_l;

}					t_size;

typedef struct		s_flags
{
	int				zero;
	int				minus;
	int				plus;
	int				space;
	int				sharp;
}					t_flags;

typedef struct		s_fstring
{
	char			*fnl;
	char			*str;
	t_flags			flag;
	int				wid;
	int				precision;
	t_size			size;
	char			type;
	char			sign;
	int				pr_z;
}					t_fstring;

typedef struct		s_pfstruct
{
	va_list			args;
	char			*str;
	int				pfreturn;
	t_fstring		fs;
}					t_pfstruct;

int					ft_printf(const char *format, ...);
int					set_flag(t_pfstruct *data, char ch);
int					set_size(t_pfstruct *data, int *i);
int					set_width(t_pfstruct *data, char ch);
int					set_precision(t_pfstruct *data, char ch);
void				p_integer_main(t_pfstruct *data);
void				p_char(t_pfstruct *data);
void				p_string_main(t_pfstruct *data);
void				p_percent(t_pfstruct *data);
void				p_uint_main(t_pfstruct *data);
void				p_oct_main(t_pfstruct *data);
void				p_hexademic_main(t_pfstruct *data);
void				print_pointer(t_pfstruct *data);
void				print_float(t_pfstruct *data);
void				print_float2(t_pfstruct *data);

int					write_ch(int i, char ch);
char				*ft_itoa_base(uintmax_t num, uintmax_t not);
void				prec_0(t_pfstruct *data);
int					ft_putstrcount(char const *s);
int					modulus(int i);
long double			modulus_double(long double i);
void				spacensign(t_pfstruct *data);

char				*power_2(int pow);

void				deinit(t_pfstruct *data);
void				pf_init(t_pfstruct *data);

char				*from_bin(char *str);
char				*ft_ftoa_base2(long double num);

#endif
