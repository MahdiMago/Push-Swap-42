/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mago <mago@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:40:33 by mamagoma          #+#    #+#             */
/*   Updated: 2025/02/25 22:24:06 by mago             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdint.h>

typedef struct st_list
{
	void			*content;
	struct st_list	*next;
}	tt_list;

long		ft_atoi(const char *nptr);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	free_char_array(char **array);
int		ft_only_char(const char *str, char c);
int		count_char_occurrences(const char *str, char c);
int		contain_only(char *str);
void	ft_swap(int	*a, int	*b);

void	ft_lstadd_back(tt_list **lst, tt_list *new);
void	ft_lstadd_front(tt_list **lst, tt_list *new);
void	ft_lstclear(tt_list **lst, void (*del)(void*));
void	ft_lstdelone(tt_list *lst, void (*del)(void*));
void	ft_lstiter(tt_list *lst, void (*f)(void *));
tt_list	*ft_lstlast(tt_list *lst);
tt_list	*ft_lstmap(tt_list *lst, void *(*f)(void *), void (*del)(void *));
tt_list	*ft_lstnew(void *content);
int		ft_lstsize(tt_list *lst);

#endif
