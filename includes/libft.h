/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlongfel <dlongfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:13:34 by dlongfel          #+#    #+#             */
/*   Updated: 2020/11/24 17:13:34 by dlongfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define LLMAX 9223372036854775807

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				ft_bzero(void *s, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memchr(const void *arr, int c, size_t n);
int					ft_memcmp(const void *arr1, const void *arr2, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memset(void *dest, int c, size_t n);
char				*ft_strcat(char *dest, const char *ap);
char				*ft_strchr(const char *str, int ch);
char				*ft_strcpy(char *str1, const char *str2);
char				*ft_strdup(const char *str);
size_t				ft_strlen(const char *string);
char				*ft_strncat(char *dest, const char *ap, size_t n);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strrchr(const char *str, int ch);
char				*ft_strstr(const char *str1, const char *str2);
int					ft_strcmp(const char *str1, const char *str2);
int					ft_strncmp(const char *str1, const char *str2, size_t n);
int					ft_isalpha(int ch);
int					ft_isalnum(int ch);
int					ft_isdigit(int ch);
int					ft_toupper(int ch);
int					ft_tolower(int ch);
int					ft_atoi(const char *str);
int					ft_isascii(int ch);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
int					ft_isprint(int ch);
char				*ft_strnstr(const char *str1, const char *str2, size_t len);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
char				*ft_itoa(int n);
size_t				ft_strlcat(char *dst, const char *ap, size_t n);
char				**ft_strsplit(char const *s, char c);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
int					ft_sqrt(int nb);
int					*ft_range(int min, int max);
void				ft_uppercase(char *str);
void				ft_lowercase(char *str);
int					ft_wordcounter(char *str);

#endif
