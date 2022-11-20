/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:15:15 by ljerinec          #+#    #+#             */
/*   Updated: 2022/11/01 17:15:17 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

int				ft_atoi(char *str);
void			*ft_memset(void	*pointeur, int value, unsigned int n);
void			ft_bzero(void	*pointeur, unsigned int n);
int				ft_isalnum(int character);
int				ft_isalpha(int character);
int				ft_isdigit(int character);
int				ft_isprint(int caracter);
void			*ft_memcpy(void *dest, void const *src, size_t len);
int				ft_strlen(const char *str);
int				ft_strncmp(char *s1, char *s2, unsigned	int n);
int				ft_tolower(int caracter);
int				ft_toupper(int caracter);
int				ft_isascii(int caracter);
void			*ft_memmove(void *dest, void *src, size_t len);
char			*ft_strchr(char *str, int caracter);
char			*ft_strrchr(char *str, int caracter);
size_t			ft_strlcpy(char	*dest, const char	*src, size_t n);
char			*ft_strdup(char *src);
int				ft_memcmp(void *s1, void *s2, size_t n);
void			*ft_memchr(const void *str, int caracter, size_t len);
char			*ft_strnstr(const char *str, char *to_find, size_t n);
size_t			ft_strlcat(char *dst, const char	*src, size_t dstsize);
void			*ft_calloc(size_t count, size_t size);
char			*ft_strjoin(char const *s1, char const *s2);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			*ft_itoa(int n);
char			**ft_split(char const *s, char c);

#endif