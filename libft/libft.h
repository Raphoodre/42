#ifndef LIBFT_H
# define LIBFT_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_atoi(const char *str);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
size_t ft_strlen(const char *s);
int ft_strncmp(const char *s1, const char *s2, size_t n);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlcat(char *dst, const char *src, size_t size);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
int ft_tolower(int c);
int ft_toupper(int c);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);


#endif