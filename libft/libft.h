/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:41:21 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/07/18 16:31:17 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stddef.h>
# include <stdint.h>
# include <stdio.h>
# include <ctype.h>
# include <string.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

// Declarations from ft_memset.c
void	*ft_memset(void *s, int c, size_t n);
// Declarations from ft_strlcpy.c
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
// Declarations from ft_memcpy.c
void	*ft_memcpy(void *dest, const void *src, size_t n);
// Declarations from ft_isalpha.c
int		ft_isalpha(int c);
// Declarations from ft_isdigit.c
int		ft_isdigit(int c);
// Declarations from ft_bzero.c
void	ft_bzero(void *s, size_t n);
// Declarations from ft_isalnum.c
int		ft_isalnum(int c);
// Declarations from ft_toupper.c
int		ft_toupper(int c);
// Declarations from ft_strchr.c
char	*ft_strchr(const char *s, int c);
// Declarations from ft_strncmp.c
int		ft_strncmp(const char *s1, const char *s2, size_t n);
// Declarations from ft_memchr.c
void	*ft_memchr(const void *s, int c, size_t n);
// Declarations from ft_strnstr.c
char	*ft_strnstr(const char *big, const char *little, size_t len);
// Declarations from ft_calloc.c
void	*ft_calloc(size_t nmemb, size_t size);
// Declarations from ft_atoi.c
int		ft_atoi(const char *nptr);
// Declarations from ft_isascii.c
int		ft_isascii(int c);
// Declarations from ft_isprint.c
int		ft_isprint(int c);
// Declarations from ft_tolower.c
int		ft_tolower(int c);
// Declarations from ft_strrchr.c
char	*ft_strrchr(const char *s, int c);
// Declarations from ft_memcmp.c
int		ft_memcmp(const void *s1, const void *s2, size_t n);
// Declarations from ft_strdup.c
char	*ft_strdup(const char *s);
// Declarations from ft_strlen.c
size_t	ft_strlen(const char *s);
// Declarations from ft_memmove.c
void	*ft_memmove(void *dest, const void *src, size_t n);
// Declarations from ft_strlcat.c
size_t	ft_strlcat(char *dst, const char *src, size_t size);
// Declarations from ft_substr.c
char	*ft_substr(char const *s, unsigned int start, size_t len);
// Declarations from ft_strjoin.c
char	*ft_strjoin(char const *s1, char const *s2);
// Declarations from ft_strtrim.c
char	*ft_strtrim(char const *s1, char const *set);
// Declarations from ft_split.c
char	**ft_split(char const *s, char c);
// Declarations from ft_itoa.c
char	*ft_itoa(int n);
// Declarations from ft_strmapi.c
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
// Declarations from ft_striteri.c
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
// Declarations from fr_putchar_fd.c
void	ft_putchar_fd(char c, int fd);
// Declarations from ft_putstr_fd.c
void	ft_putstr_fd(char *s, int fd);
// Declarations from ft_putendl_fd.c
void	ft_putendl_fd(char *s, int fd);
// Declarations from ft_putnbr_fd.c
void	ft_putnbr_fd(int n, int fd);
//*BONUS* Declarations from ft_lstnew_bonus.c
t_list	*ft_lstnew(void *content);
//*BONUS* Declarations from ft_lstadd_front_bonus.c
void	ft_lstadd_front(t_list **lst, t_list *new);
//*BONUS* Declarations from ft_lstsize_bonus.c
int		ft_lstsize(t_list *lst);
//*BONUS* Declarations from ft_lstlast_bonus.c
t_list	*ft_lstlast(t_list *lst);
//*BONUS* Declarations from ft_lstadd_back_bonus.c
void	ft_lstadd_back(t_list **lst, t_list *new);
//*BONUS* Declarations from ft_lstdelon_bonus.c
void	ft_lstdelone(t_list *lst, void (*del)(void*));
//*BONUS* Declarations from ft_lstclear_bonus.c
void	ft_lstclear(t_list **lst, void (*del)(void*));
//*BONUS* Declarations from ft_lstiter_bonus.c
void	ft_lstiter(t_list *lst, void (*f)(void*));
//*BONUS* Declarations from ft_lstmap_bonus.c
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
#endif
