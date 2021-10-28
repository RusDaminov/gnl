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
    while ()
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
    str = ft_read(fd, str, buf)
}
