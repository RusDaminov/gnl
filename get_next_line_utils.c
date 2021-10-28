/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:17:57 by abernita          #+#    #+#             */
/*   Updated: 2021/10/28 12:18:01 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
    size_t	i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
    char	*res;
    size_t	i;

    if (!s)
        return (0);
    i = ft_strlen(s);
    if (i < len)
        len = i;
    res = malloc(len + 1);
    if (!res)
        return (NULL);
    i = 0;
    while (s[start + i] && (start + i) < len)
    {
        res[i] = s[start + i];
        i++;
    }
    res[i] = '\0';
    return (res);
}

char	*ft_strchr(const char *s, int c)
{
    if (!s)
        return (0);
    while (*s)
    {
        if (*s == (char)c)
            return ((char *)s);
        s++;
    }
    if (*s == (char)c)
        return ((char *)s);
    return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
    char	*res;
    int		i;
    int		j;

    if (!s1 || !s2)
        return (0);
    res = malloc(sizeof(*res) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
    if (!res)
        return (NULL);
    i = -1;
    while (s1[++i])
        res[i] = s1[i];
    j = -1;
    while (s2[++j])
        res[i + j] = s2[j];
    free(s1);
    res[i + j] = '\0';
    return (res);
}
//size_t ft_strlen(const char *s)
//{
//    size_t i;
//
//    i = 0;
//    while (s[i] != '\0')
//        i++;
//    return (0);
//}
//
//char	*ft_substr(char *s, unsigned int start, size_t len)
//{
//    char	*res;
//    size_t	i;
//
//    if (!s)
//        return (0);
//    i = ft_strlen(s);
//    if (i < len)
//        len = i;
//    res = malloc(len + 1);
//    if (!res)
//        return (NULL);
//    i = 0;
//    while (s[start + i] && (start + i) < len)
//    {
//        res[i] = s[start + i];
//        i++;
//    }
//    res[i] = '\0';
//    return (res);
//}
//
//char	*ft_strchr(const char *s, int c)
//{
//    if (!s)
//        return (0);
//    while (*s)
//    {
//        if (*s == (char)c)
//            return ((char *)s);
//        s++;
//    }
//    if (*s == (char)c)
//        return ((char *)s);
//    return (0);
//}
//
//char	*ft_strjoin(char *s1, char *s2)
//{
//    char	*res;
//    int		i;
//    int		j;
//
//    if (!s1 || !s2)
//        return (0);
//    res = malloc(sizeof(*res) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
//    if (!res)
//        return (NULL);
//    i = -1;
//    while (s1[++i])
//        res[i] = s1[i];
//    j = -1;
//    while (s2[++j])
//        res[i + j] = s2[j];
//    free(s1);
//    res[i + j] = '\0';
//    return (res);
//}