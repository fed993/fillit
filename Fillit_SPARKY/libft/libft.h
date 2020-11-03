/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 17:14:26 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/21 08:20:51 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct	s_list
{

	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

void			ft_putstr(char const *str);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putchar(char c);
void			ft_putchar_fd(char c, int fd);
void			ft_putnbr(int nb);
void			ft_putnbr_fd(int nb, int fd);
void			ft_putendl(char const *s);
void			ft_putendl_fd(char const *s, int fd);
void			ft_memdel(void **ap);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, char (*f)(unsigned int, char*));
void			ft_bzero(void *s, size_t n);
void			ft_putstrl(char *str, int length);
void			ft_putstrl_fd(char *str, int length, int fd);
void			ft_itoa_neg_helper(int *n, int *negative_flag);
void			ft_lstadd(t_list **alst, t_list *n);
void			ft_lstdel(t_list **alist, void (*del)(void *, size_t));
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstnew(void const *content, size_t content_size);
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *));
int				ft_cantrim(char c);
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
int				ft_strcontains(char *str, char c);
int				ft_atoi(char *str);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_magnitude(size_t low, long n);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
int				ft_wrdcnt(const char *s, char c);
int				ft_determine_int_length(int nb);
int				ft_tolower(int c);
int				ft_toupper(int c);
void			*ft_memalloc(size_t size);
void			*ft_memset(void *str, int c, size_t n);
void			*ft_memcpy(void *str1, const void *str2, size_t n);
void			*ft_memccpy(void *str1, const void *str2, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memgive(size_t size);
char			**ft_strsplit(const char *s, char c);
char			*ft_strstr(const char *src, const char *in);
char			*ft_itoa(int n);
char			*ft_strcat(char *dest, const char *src);
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strnstr(const char *src, const char *in, size_t len);
char			*ft_strrchr(const char *str, int c);
char			*ft_strcpy(char *s1, const char *s2);
char			*ft_strchr(const char *str, int c);
char			*ft_skipblanks(char *str);
char			*ft_skipneg(char *str);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s);
char			*ft_stricut(const char *src, int strt, int end);
char			*ft_strncpy(char *dest, char *src, size_t len);
char			*ft_strncat(char *s1, const char *s2, size_t n);
char			*ft_strnew(size_t size);
char			*ft_strdup(const char *s1);
long			ft_absval(long n);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
size_t			ft_strlen(const char *str);

#endif
