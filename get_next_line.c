/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:17:31 by abernita          #+#    #+#             */
/*   Updated: 2021/10/28 12:17:36 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char ft_read(int fd, char *str, char *buf)
{
    int len;

    len = 1;
    while (!ft_strchr(str, '\n') && len != 0)
    {    len = read(fd, buf, BUFFER_SIZE);
        if (len < 0)
        {
            free(buf);
            return (0);
        }
        buf[len] = '\0';
        if (!str)
            str = ft_substr(buf, 0, len);
        else
            str = ft_join(str, buf);
    }
    free(buf);
    return (str);
}

char *ft_trim_end(char *str)
{
    char *line;
    int len;

    len = 0;
    while (str[len] && str[len] != '\n')
        len++;
    if (str[len] == '\n')
        len++;
    line = ft_substr(str, 0, len)
}

char *ft_trim_start(char *str)
{
    int i;
    char *rem;

    i = 0;
    while (str[i] && str[i] != '\n')
        i++;
    i++;
    rem = ft_substr(str, i, ft_strlen(str));
    free(str);
    return (rem)
}

char *get_next_line(int fd)
{
    char *line;
    chear *buf;
    static char *str;

    if (fd < 0 || BUFFER_SIZE < 1)
        return (0);
    buf = malloc(BUFFER_SIZE +1);
    if (!buf)
        return (0);
    str = ft_read(fd, str, buf);
    if (!str || str[0] == '\0')
    {
        free(str);
        //str = 0;
        return (0);
    }
    line = trim_end(str);
    if (!line || line[0] == '\0')
    {
        free(line);
        return (0);
    }

}
